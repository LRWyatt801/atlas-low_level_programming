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

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (newNode->key == NULL || newNode->value == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = newNode;
	else
	{
		newNode->next = ht->array[index]->next;
		ht->array[index] = newNode;
	}

	return (1);
}
