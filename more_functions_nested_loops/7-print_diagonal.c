/*
 * file: 7-print_diagonal.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_diagonal - print a diagonal line on terminal
 * @n: how long line should be
 *
 * Return: N/A
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{	
			for (b = 1; b <= n; b++)
			{
				if (a != b)
					_putchar(' ');
			}
			_putchar(' ');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
