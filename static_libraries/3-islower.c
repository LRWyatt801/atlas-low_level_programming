/*
 * File: 3-islower.c
 * Auth: Logan Wyatt
 */

#include "main.h"

/**
 * _islower - prints whether or not an int is lowercase
 * @c: character to be checked
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
