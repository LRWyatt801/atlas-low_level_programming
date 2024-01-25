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
	int n, a, ones, tens;

	for (a = 1; a <= 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
				n = ones;
			else
			{
				/*seperate tens and ones*/
				tens = (n - (n % 10)) / 10;
				ones = n % 10;

				_putchar(tens + '0');
			}

			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
