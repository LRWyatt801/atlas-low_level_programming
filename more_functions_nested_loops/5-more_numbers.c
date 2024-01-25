/*
 * file: 5-more_numbers.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * more_numbers - print 10 times the numbers 0-14 followed by new line
 *
 * Return: N/A
 */

void more_numbers(void)
{
	int n, a;

	for (a = 1; a <= 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
