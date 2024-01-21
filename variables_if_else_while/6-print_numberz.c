/*
 * File: 6-print_numberz.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print [0..9] using putchar
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n > 10; n++)
		putchar('0' + (n % 10));

	putchar('\n');

	return (0);
}
