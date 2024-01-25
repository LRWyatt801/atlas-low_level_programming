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
	int n;

	for (n = 0; n < 10; n++)
	{
		if ((n = 2) || (n = 4))
			n++;
		else
		{
			_putchar(n + '0');
			n++;
		}
	}
	_putchar('\n');
}
