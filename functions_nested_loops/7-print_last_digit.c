/*
 * file: 7-print_last_digit.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of int
 * @n: int to display last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
