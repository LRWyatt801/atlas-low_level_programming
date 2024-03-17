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

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	
	if (ht->array[index]->value == NULL)
		return (NULL);
	else
		return(ht->array[index]->value);
}
