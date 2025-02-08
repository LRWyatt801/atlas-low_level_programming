#include "hash_tables.h"
#include <stdio.h>
#include <string.h>


/**
* shash_table_create - creates a hash table
* @size: size of table
*
* Return: shash_table_t or NULL on failure
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newHash;
	unsigned long int i = 0;

	newHash = malloc(sizeof(shash_table_t));
	if (newHash == NULL)
		return (NULL);

	newHash->size = size;
	newHash->array = malloc(sizeof(shash_node_t *) * size);
	if (newHash->array == NULL)
	{
		free(newHash);
		return (NULL);
	}

	for (i = 0; i <= size; i++)
		newHash->array[i] = NULL;

	newHash->shead = NULL;
	newHash->stail = NULL;

	return (newHash);
}

/**
* shash_table_set - set key, value pair in hash table
* @ht: hash table to use
* @key: key to use in hash table
* @value: value to set in hash table at key
*
* Return: 0 on success, -1 on failure
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode, *tmp;
	unsigned long int indexkey;
	char *valuecpy, *keycpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (-1);

	/* make a copy of value */
	valuecpy = strdup(value);
	if (valuecpy == NULL)
		return (-1);
	keycpy = strdup(key);
	if (keycpy == NULL)
		return (-1);

	indexkey = key_index((const unsigned char *)key, ht->size);

	/* Check if key/value exists and update value 
	 * Handle collision, if collision move along linked list
	 * until NULL 
	 */
	tmp = ht->array[indexkey];
	while (tmp != NULL) /* check if indexkey already filled */
	{
		if (strcmp(tmp->key, key) == 0)
		{
			strcpy(tmp->value, value);
			return (0);
		}
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
	}

	/* setup node for hashtable */
	newNode = malloc(sizeof(shash_node_t)); /* add new node data */
	if (newNode == NULL)
		return (0);

	newNode->key = keycpy;
	newNode->value = valuecpy;
	newNode->next = NULL;
	newNode->sprev = NULL;
	newNode->snext = NULL;
	if (tmp == NULL)
		ht->array[indexkey] = newNode;
	else
		tmp->next = newNode;

	/* insert node in sorted hash list */
	if (ht->shead == NULL || *key < *ht->shead->key)
	{
		newNode->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = newNode;
		else if (ht->shead == NULL)
			ht->stail = newNode;
		ht->shead = newNode;
		return (0);
	}
	tmp = ht->shead; /* reuse tmp to traverse sorted list */
	while (tmp->snext != NULL && *tmp->snext->key < *key)
		tmp = tmp->snext;

	newNode->snext = tmp->snext;
	if (tmp->snext != NULL)
		tmp->snext->sprev = newNode;
	tmp->snext = newNode;
	newNode->sprev = tmp;
	if (newNode->snext == NULL)
		ht->stail = newNode;
	return (0);
}

/**
* shash_table_get - get the value in a hash table at key
* @ht: hash table to look in
* @key: key to find
*
* Return: value of matching key
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	(void)ht;
	(void)key;
	return ("hello");
}

/**
* shash_table_print - prints all key/value pairs in a hash table
* @ht: hash table to print
*
* Return: n/a
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL || ht->shead == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->snext != NULL)
			printf(", ");
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
* shash_table_print_rev - prints all key/value pairs
*			  in a hash table in reverse order
* @ht: hash table to print
*
* Return: n/a
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL || ht->stail == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->sprev != NULL)
			printf(", ");
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
* shash_table_delete - deletes all key/value pairs in a hash table
* @ht: hash table to delete
*
* Return: n/a
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp, *del;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				del = tmp;
				tmp = tmp->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	}
	free(ht->array);
	free(ht);

}

/********** HELPER FUNCS **********/

/**
* align_size - rounds up to the next power of 2
* @size: size given to round
*
* Return: rounded up to power of 2
*/

unsigned long int align_size(unsigned long int size)
{
	if (size == 0)  /* Edge case: 0 should round up to 1 */
		return (1);

	size--;  /* Decrement to handle exact powers of 2 correctly */
	size |= size >> 1;
	size |= size >> 2;
	size |= size >> 4;
	size |= size >> 8;
	size |= size >> 16;
	if (sizeof(size) > 4) /* If 64-bit, continue shifting */
		size |= size >> 32;
	size++;  /* Increment to get the next power of 2 */

	return (size);
}

/**
 * _strdup - returns a copy of the given string in a dynamic pointer
 * @str: string to be copied
 *
 * Return: pointer to new string or NULL if fail
 */

char *_strdup(const char *str)
{
	char *strcp;
	size_t len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	strcp = malloc(sizeof(char) * (len + 1));
	if (strcp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strcp[i] = str[i];
	strcp[len + 1] = '\0';

	return (strcp);
}
