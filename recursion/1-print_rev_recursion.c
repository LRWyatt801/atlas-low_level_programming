/*
 * file: 1-print_rev-recursion.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 *
 * Return: n/a
 */

void _print_rev_recursion(char *s)
{
	int i = 0;
	char tmp = s[i];

	if (*s != '\0')
	{
		tmp = s[i];
		_print_rev_recursion(s + 1);
		_putchar(tmp);
	}
}
