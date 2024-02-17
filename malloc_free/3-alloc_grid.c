/*
 * file: 3-alloc_grid.c
 * auth: Logan Wyatt
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocates a 2d array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
