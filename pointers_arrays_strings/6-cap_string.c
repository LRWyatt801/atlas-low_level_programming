/*
 * file: 6-cap_string.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * cap_string - capitalized each word in a string
 * @str: string to be caps
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
