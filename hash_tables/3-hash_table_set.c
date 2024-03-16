#include "hash_tables.h"

/**
 * hash_table_set - adds element to table
 * @ht: hash table to create/add to
 * @key: the key, cannot be empty
 * @value: data associated with key, cannot be empty
 *
 * Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int index;
	char *newstr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	newstr = strdup(value);
	if (newstr == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/*if (strcmp(ht->array[index]->key, key) == 0) * update existing node *
	{
		free(ht->array[index]->value);
		ht->array[index]->value = newstr;
		return (1);
	}*/

	newNode = malloc(sizeof(hash_node_t)); /* add new node data */
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
		return (0);

	newNode->value = newstr;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
