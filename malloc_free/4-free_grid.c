/*
 * file: 4-free_grid.c
 * auth: Logan Wyatt
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2d array from memory
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: n/a
 */

void free_grid(int **grid, int height)
{
	int i = height;

	for (--i; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
