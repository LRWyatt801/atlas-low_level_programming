/*
 * file: 5-rev_string.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * rev_string - reveres a string
 * @s: string to be reversed
 *
 * Return: n/a
 */

void rev_string(char *s)
{
	int i, n, len;

	i = 0;

	while (s[i] != '\0')
		i++;

	len = i;

	for (n = len - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
