/*
 * file: 3-factorial.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * factorial - returns the factorial of an intd
 * @n: int to be used
 *
 * Return: product
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
