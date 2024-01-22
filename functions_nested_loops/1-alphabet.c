/*
 * File: 1-alphabet.c
 * Auth: Logan Wyatt
 */

#include "main.h"

/**
 * main - print alphabet with _putchar.c
 *
 * Return: void
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');

}
