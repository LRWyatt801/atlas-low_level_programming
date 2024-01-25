/*
 * file: 4-print_most_numbers.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9
 *			except 2 and 4
 *			followed by new line
 *
 * Return: N/A
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n = 2 || n = 4)
			n++;
		else
		{
			_putchar(n + '0');
			n++;
		}
	}
	_putchar('\n');
}
