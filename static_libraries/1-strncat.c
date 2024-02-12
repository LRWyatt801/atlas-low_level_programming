/*
 * file: 1-strnc@t.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: first string
 * @dest: destination for both strings
 * @n: number of bytes to be used from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a, slen, dlen, dif, len;

	/* length of strings */

	for (i = 0; src[i] != '\0'; i++)
		slen = i;
	for (i = 0; dest[i] != '\0'; i++)
		dlen = i;

	if (n > slen)
		len = dlen + slen + 1;
	else if (n < slen)
	{
		dif = slen - n;
		slen = slen - dif;
		len = dlen + slen;
	}

	/* strc@t */

	i = dlen + 1;
	a = 0;

	while (i <= len)
	{
		dest[i] = src[a];
		i++;
		a++;
	}

	return (dest);
}
