/*
 * file: 7-puts_half.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * puts_half - puts half of a string
 * @str: string to be printed
 *
 * Return: n/a
 */

void puts_half(char *str)
{
	int i = 0, odd, even;

	/* length */

	while (str[i] != '\0')
		i++;
	even = i / 2;
	odd = (i - 1) / 2;

	/* print */

	if (i % 2 == 0) /* even */
	{
		for (i = even; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else /* odd */
	{
		for (i = odd; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
