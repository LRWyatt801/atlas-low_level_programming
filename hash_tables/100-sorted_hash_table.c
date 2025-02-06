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

	size = align_size(size);
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
	char *valuecpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (-1);

	/* make a copy of value */
	valuecpy = strdup(value); /* TODO: write my own strdup */
	if (valuecpy == NULL)
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
	newNode = malloc(sizeof(hash_node_t)); /* add new node data */
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key); /* TODO: write strdup */
	if (newNode->key == NULL)
		return (0);

	newNode->value = valuecpy;
	newNode->next = NULL;
	newNode->sprev = NULL;
	newNode->snext = NULL;
	if (tmp == NULL)
		ht->array[indexkey] = newNode;
	else
		tmp->next = newNode;


	/* insert node in sorted hash list */
	tmp = ht->shead; /* reuse tmp to traverse sorted hash */
	if (!tmp)
	{
		ht->shead = newNode;
		return (0);
	}
	while (tmp->snext != NULL)
		tmp = tmp->snext;
	tmp->snext = newNode;
	newNode->sprev = tmp;

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

	if (!ht)
	{
		printf("ht is NULL\n");
		return;
	}
	tmp = ht->shead;
	while (tmp->snext != NULL)
	{
		printf("%s: %s\n", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
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
	(void)ht;
}

/**
* shash_table_delete - deletes all key/value pairs in a hash table
* @ht: hash table to delete
*
* Return: n/a
*/

void shash_table_delete(shash_table_t *ht)
{
	(void)ht;
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
