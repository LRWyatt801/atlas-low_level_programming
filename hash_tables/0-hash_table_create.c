#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: pointer to new hash table, or 0 on fail
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;
	/*unsigned long int i = 0;*/

	newHash = malloc(sizeof(hash_table_t));
	if (newHash == NULL)
		return (NULL);

	newHash->size = size;
	newHash->array = malloc(sizeof(hash_node_t *) * size);
	if (newHash->array == NULL)
	{
		free(newHash);
		return (NULL);
	}

	return (newHash);
}