/*
 * file: 0-strcat.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: first string
 * @dest: destination for both strings
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n, slen, dlen, len;

	/* length of strings */

	for (i = 0; src[i] != '\0'; i++)
		slen = i;
	for (i = 0; dest[i] != '\0'; i++)
		dlen = i;

	len = slen + dlen;

	/* strcat */

	i = dlen;
	n = 0;

	while (i <= len)
	{
		dest[i] = src [n];
		i++;
		n++;
	}

	return (dest);
}
