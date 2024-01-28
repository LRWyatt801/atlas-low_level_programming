/*
 * file: 4-print_rev.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_rev = prints a string in reverse followed by new line
 * @s: string to be printed
 *
 * Return: n/a
 */

void print_rev(char *s)
{
	int i, n, len;

	while (s[i] != '\0')
		i++;
	
	len = i;

	for (n = len - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
