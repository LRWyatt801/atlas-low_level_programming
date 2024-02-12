/*
 * file: 3_strcmp.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: 0 if s1 == s2
 *	   - value if s1 < s2
 *	   + value if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*s1 - *s2);
}
