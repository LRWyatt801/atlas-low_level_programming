/*
 * File: 5-print_numbers.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print 0-9
 *
 * Return: always 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	putchar('\n');

	return (0);
}
