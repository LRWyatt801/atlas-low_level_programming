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
	int i = 0, n;

	/* length */

	while (str[i] != '\0')
		i++;
	n = (i - 1) / 2;

	/* print */

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
