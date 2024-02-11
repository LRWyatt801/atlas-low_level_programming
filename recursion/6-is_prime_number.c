/*
 * file: 6-is_prime_number.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * checker - checks for prime number
 * @quotient: number to be checked
 * @n: int to divide by
 *
 * Return: 1 if prime and 0 if not
 */

int checker(int n, int quotient)
{
	if ((quotient % n == 0 && quotient / n != 1) || quotient < 2)
		return (0);
	else if (quotient / n == 1)
		return (1);
	else
		return (checker(n + 1, quotient));
}

/**
 * is_prime_number - tests for a prime number
 * @n: number to be tested
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (checker(2, n));
}
