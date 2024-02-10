/*
 * file: 4_pow_recursion.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _pow_recursion - x^y
 * @x: base var
 * @y: power
 *
 * Return: product
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
