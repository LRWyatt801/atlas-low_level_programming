/*
 * file: 6-abs.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _abs - computes the absolute value
 * int - test int
 *
 * Return: int
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
