/*
 * file: 2_calloc.c
 * auth: Logan Wyatt
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements for array
 * @size: size of elements in bytes
 *
 * Return: NULL for failure, nmemb = 0, size = 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	
	return (arr);
}
