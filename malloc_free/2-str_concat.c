/*
 * file: 2-str_concat.c
 * auth: Logan Wyatt
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to s1 + s2 or NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int i, j; /* i for s1, j for s2 */
	size_t len; /* lenth of strcat */
	int x = 0, leni, lenj; /* counter for cat */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	len = i + j + 1;
	leni = i;
	lenj = j;

	strcat = malloc(sizeof(char) * len);
	if (strcat == NULL)
		return (NULL);

	i = 0;
	while (x < leni)
	{
		strcat[x] = s1[i];
		x++;
		i++;
	}
	j = 0;
	while (x <= leni + lenj)
	{
		strcat[x] = s2[j];
		x++;
		j++;
	}
	strcat[x] = '\0';

	return (strcat);
}
