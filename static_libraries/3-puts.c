/*
 * file: 3-puts.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: n/a
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
