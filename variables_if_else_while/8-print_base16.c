/*
 * File: 8-print_base16.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print all numbers of base 16 in lowercase,
 *        followed by new line
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	char hex;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
