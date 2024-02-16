/*
 * file: 1_strdup.c
 * auth: Logan Wyatt
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of the given string in a dynamic pointer
 * @str: string to be copied
 *
 * Return: pointer to new string or NULL if fail
 */

char *_strdup(char *str)
{
	char *strcp;
	size_t len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	strcp = malloc(sizeof(char) * (len + 1));
	if (strcp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strcp[i] = str[i];
	strcp[len + 1] = '\0';

	return (strcp);
}
