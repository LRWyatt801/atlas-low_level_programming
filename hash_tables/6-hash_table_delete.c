#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to delete
 *
 * Return: n/a
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *del;

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