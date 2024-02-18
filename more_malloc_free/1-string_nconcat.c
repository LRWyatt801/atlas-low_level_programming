/*
 * file: 1-string_nconcat.c
 * auth: Logan Wyatt
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings to pointer
 * @s1: first string
 * @s2: sencond string
 * @n: number of characters to print of s2
 *
 * Return: pointer to memory of s1 + s2 + '\0'
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i = 0, j = 0;
	unsigned int leni, lenj, x = 0;
	size_t len;

	/* length for str */

	if (s1 != NULL && s2 != NULL)
	{
		for (leni = 0; s1[leni] != '\0'; leni++)
			;
		for (lenj = 0; s2[lenj] != '\0'; lenj++)
			;
		if (n < lenj)
			lenj = n;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		for (leni = 0; s1[leni] != '\0'; leni++)
			;
		lenj = 0;
	}
	else if (s1 == NULL && s2 != NULL)
	{
		leni = 0;
		for (lenj = 0; s2[lenj] != '\0'; lenj++)
			;
		if (n < lenj)
			lenj = n;
	}
	len = leni + lenj + 1;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	while (x < leni)
	{
		str[x] = s1[i];
		x++;
		i++;
	}
	while (x < leni + lenj)
	{
		str[x] = s2[j];
		x++;
		j++;
	}
	str[x] = '\0';

	return (str);
}
