/*
 * file: 1-swap.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * swap_int - swap the values of two int
 * @a: int to be swapped
 * @b: int to be swapped
 *
 * Return: N/A
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *c;
}
