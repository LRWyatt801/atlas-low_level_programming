/*
 * file - 4-rev_array.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * reverse_array - reverse given n interegers
 * @a: string of int
 * @n: number of int to be reversed
 *
 * Return: n/a
 */

void reverse_array(int *a, int n)
{
	int tmp, i = 0;
	
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}	
}
