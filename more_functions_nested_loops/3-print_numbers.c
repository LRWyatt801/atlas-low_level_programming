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
	int n = 0;

	while (n < 10)
		_putchar (n + '0');

	_putchar ('\n');
}
