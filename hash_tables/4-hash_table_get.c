#include "hash_tables.h"

/**
 * hash_table_get - retrieves the data associated with a key
 * @ht: hast table to search
 * @key: key to use
 *
 * Return: value of hash, or NULL if key could not be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *data;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	data = ht->array[index];
	while (data != NULL && strcmp(data->key, key) != 0)
		data = data->next;

	return ((data == NULL) ? NULL : data->value);
}
