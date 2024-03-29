/*
 * file: 9-times_table.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * times_table - print 9x9 times table
 *
 * Return: ...
 */

void times_table(void)
{
	int a, b, pro;

	/* a * b = pro */

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			pro = a * b;
			if (pro >= 10)
			{
				int tens, ones;

				tens = (pro - (pro % 10)) / 10;
				ones = pro % 10;
				_putchar(tens + '0');
				_putchar(ones + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
			else
			{
				_putchar(pro + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
		/* set b to 0*/
		b = 0;
	}
}
