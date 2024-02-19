/*
 * file: 3-array_range.c
 * auth: Logan Wyatt
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer to include in array
 * @max: maximum integer to include in array
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
