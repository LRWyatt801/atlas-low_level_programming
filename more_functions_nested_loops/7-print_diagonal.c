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
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (a < n)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
