/*
 * file: 6-print_line.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: number of character to be printed
 *
 * Return: N/A
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	}
	_putchar('\n');
}
