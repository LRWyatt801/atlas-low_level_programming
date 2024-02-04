/*
 * file: 0_memset.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area of memory to be filled
 * @b: constant
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **ps;
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	ps = &s;
	return (*ps);
}
