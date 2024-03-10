#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary number to stdout
 * @n: number
 *
 * Return: n/a
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int ones = 0;
	unsigned long int shift;

	for (i = 63; i >= 0; i--)
	{
		shift = n >> i;

		if (shift & 1)
		{
			_putchar('1');
			ones++;
		}
		else if (ones)
			_putchar ('0');
	}
	if (ones == 0)
		_putchar ('0');
}
