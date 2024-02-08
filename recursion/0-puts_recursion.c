/*
 * file: 0_puts_recursion.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 *		     followed by a new line
 * @s: string to be printed
 *
 * Return: n/a
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);

	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
