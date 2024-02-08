/*
 * file: 2_strlen_recursion.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _strlen_recursion.c - prints the length of a string
 * @s: string
 *
 * Return: int length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return 1 + _strlen_recursion(s + 1);
}
