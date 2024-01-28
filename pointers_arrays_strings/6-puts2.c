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
	int i, n;
	
	n = i + 2;;

	for (i = 0; str[i] != '\0'; n)
		_putchar(str[i]);
	_putchar('\n');
}
