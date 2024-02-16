/*
 * file: 0-create_array.c
 * auth: Logan Wyatt
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be used to initialize
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	new_array = malloc(sizeof(char) * size);

	if (new_array == NULL)
		return (NULL);
	
	for (i = 0; i <= size; i++)
		new_array[i] = c;

	return (new_array);
}
