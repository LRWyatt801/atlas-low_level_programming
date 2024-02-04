/*
 * file: 1_memcpy.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: destination for copy
 * @src: area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **pd;

	pd = &dest;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (*pd);
}
