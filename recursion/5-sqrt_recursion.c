/*
 * file: 5_sqrt_recursion.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * checker - checks the input of sqrt to the base
 * @n: root of radicand
 * @radicand: radicand to sqr
 *
 * Return: natural sqr root of base
 */

int checker(int n, int radicand)
{
	if (n * n == radicand)
		return (n);
	if (n * n > radicand)
		return (-1);
	return (checker(n + 1, radicand));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the root
 *
 * Return: product
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
