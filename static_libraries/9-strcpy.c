/*
 * file: 9-str_cpy.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strcpy - copys a string
 * @src: sorce var
 * @dest: destination var
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy);
}
