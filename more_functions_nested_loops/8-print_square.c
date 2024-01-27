/*
 * file: 8-print_square.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_square - print a square of characters
 * @size: size of square
 *
 * Return: N/A
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
