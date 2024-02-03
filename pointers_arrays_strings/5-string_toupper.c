/*
 * file: 5-string_toupper.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * #str: string to change
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 38;
	}
	return (str);
}
