/*
 * file: 0-isupper.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _isupper - test int for uppercase character
 * @c: character to be tested
 *
 * Return: int 1 if upper
 *	   int 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
