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
	int size, i = 0;

	if (min > max)
		return (NULL);

	if (min < 0 && max > 0)
		size = (min * -1) + max;
	else
		size = max - min;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i] = i;

	return (ptr);
}
