/*
 * file: 2-strn cpy.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strncpy - copis a string
 * @src: string to be copied
 * @dest: destination for copy
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	/* length */

	i = 0;
	while (src[i] != '\0')
		i++;

	if (n < i)
		len = n;
	else if (n > i)
		len = i + 1;

	/* copy */

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
