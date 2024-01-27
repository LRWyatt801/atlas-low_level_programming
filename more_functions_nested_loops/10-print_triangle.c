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
		int x, y;

		for (y = 1; y <= size; y++)
		{
			for (x = y; x < size; x++)
				_putchar(' ');
			for (x = 1; x <= y; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
