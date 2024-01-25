/*
 * file: 3-print_numbers.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_numbers - prints 0-9
 *
 * Return: N/A
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar (n + '0');

	_putchar ('\n');
}
