/*
 * File: 2-print_alphabet_x10.c
 * Auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet, followed by new line,
 *                  10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
