/*
 * File: 1-last_digit.c
 * Auth: Logan Wyatt
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate random int n and print the last digit
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, n % 10);

		if ((n % 10) > 5)
			printf("and is greater than 5\n");
		else if ((n % 10) <= 5 && (n % 10) != 0)
			printf("and is less than 6 and not 0\n");
		else
			printf("and is 0\n");

	return (0);
}
