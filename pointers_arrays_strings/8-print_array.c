/*
 * file: 8-print_array.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_array - print 'n' elements of an array
 * @a: array to be printed
 * @n: number of elements to print
 *
 * Return: n/a
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
