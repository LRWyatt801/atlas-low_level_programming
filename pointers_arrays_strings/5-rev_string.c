/*
 * file: 5-rev_string.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * rev_string - reveres a string
 * @s: string to be reversed
 *
 * Return: n/a
 */

void rev_string(char *s)
{
	char tmp;
	int i, len,;

	/* legnth of rev */

	i = 0;

	while (s[i] != '\0')
		i++;
	len = i - 1;

	/* reverses string in s[] */

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
