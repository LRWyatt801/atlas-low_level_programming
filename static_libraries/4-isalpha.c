/*
 * file: 4-isalpha.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _isalpha - tests input for alphabetic character
 *
 * @c: character to be tested
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
