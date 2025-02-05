#include "hash_tables.h"

/**
* shash_table_create - creates a hash table
* @size: size of table
*
* Return: shash_table_t or NULL on failure
*/

shash_table_t *shash_table_create(unsigned long int size)
{

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

