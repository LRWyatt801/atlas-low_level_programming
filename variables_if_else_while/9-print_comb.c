/*
 * File: 9-print_comb.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print all single digits, followed by a ","
 *        and new line
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
