/*
 * file: 8-24_hours.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * jack_bauer - print every minute from 00:00 to 23:59
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
	return ();
}

