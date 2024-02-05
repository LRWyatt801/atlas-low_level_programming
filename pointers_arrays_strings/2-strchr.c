/*
 * file: 2_strchr.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be located
 *
 * Return: return pointer to first char  occurrence in string
 *	   and \0 if char is not found
 */

char *_strchr(char *s, char c)
{
	int i, len, boolean = 0;
	char *c1;

	for (i = 0; s[i] != '\0'; i++)
		len = i;


	for (i = 0;i <= len; i++)
	{
		if (s[i] == c)
		{
			c1 = &s[i];
			boolean = 1;
			break;
		}
	}
	if (boolean == 0)
		return ('\0');
	return (c1);
}
