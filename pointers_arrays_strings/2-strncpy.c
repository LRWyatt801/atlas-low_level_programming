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
	len = i;

	/* copy */
	
	if (n <= len)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else if (n > len)
	{
		for (i = 0; i < len; i++)
			dest[i] = src[i];
		for (i = len; i < n; i++)
			dest[i] = '\0';
	}	

	return (dest);
}
