/*
 * file: 1-isdigit.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _isdigit - checks for a digit (1-9)
 * @c: int to be tested
 *
 * Return: 1 if is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
