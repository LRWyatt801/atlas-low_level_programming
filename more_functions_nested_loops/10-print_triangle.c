/*
 * file: 10-print_triangle.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_triangle - prints a triange of #,
 *		    followed by new line
 * @size: size of triangle
 *
 * Return: N/A
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int a, b, y;

		for (y = 1; y <= size; y++)
		{
			for (a = size - 1; a >= 0; a--)
				_putchar(' ');
			for (b = 1; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
