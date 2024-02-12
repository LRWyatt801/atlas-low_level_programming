/*
 * file: 2-strlen.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: pointer for string
 *
 * Return: legnth of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
