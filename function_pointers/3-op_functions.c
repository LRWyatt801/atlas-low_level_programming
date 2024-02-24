#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: int
 * @b: int
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: int
 * @b: int
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: int
 * @b: int
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide one integer by the other
 * @a: int
 * @b: int
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find remainder of one integer divided by another
 * @a: int
 * @b: int
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
