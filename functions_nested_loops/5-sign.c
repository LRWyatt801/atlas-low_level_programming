/*
 * file: 5-sign.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_sign - tests input for int is neg, pos, or 0
 * @n: input to be tested
 *
 * Return: 1 if pos, 0 if 0, and -1 if neg
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return(0);
	}
}
