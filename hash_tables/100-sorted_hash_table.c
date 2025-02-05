#include "hash_tables.h"


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

	size = size_align(size);
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

}

/**
* shash_table_delete - deletes all key/value pairs in a hash table
* @ht: hash table to delete
*
* Return: n/a
*/

void shash_table_delete(shash_table_t *ht)
{

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
	if (size == 0) return 1;  // Edge case: 0 should round up to 1

	size--;  // Decrement to handle exact powers of 2 correctly
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
