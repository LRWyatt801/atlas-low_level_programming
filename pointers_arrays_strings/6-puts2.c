/*
 * file: 6-puts2.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 *
 * Return: n/a
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
