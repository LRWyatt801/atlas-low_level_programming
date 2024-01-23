/*
 * file: 7-print_last_digit.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of int
 * @n: int to display last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lst_n;

	if (n < 0)
	{
		int neg;
		neg = n * -1;
		lst_n = neg % 10;
	}
	lst_n = n % 10;
	_putchar(lst_n + '0');

	return (lst_n);
}
