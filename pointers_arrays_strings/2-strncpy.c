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
	int i, ndif;

	/* length */

	i = 0;
	while (src[i] != '\0')
		i++;

	/* copy */
	
	if (n < i)
	{
		while ((*dest++ = *src++) <= n)
			;
	}
	else if (n == i)
	{
		while ((*dest++ = *src++) != '\0')
			;
	}
	else if (n > i)
	{
		ndif = n - i;

		while ((*dest++ = *src++) <= i)
			;
		for (i = ndif; i <= n; i++)
			dest[i] = '\0';
	}	

	return (dest);
}
