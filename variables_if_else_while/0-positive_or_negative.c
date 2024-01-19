/*
 * File: 0-positive_or_negative
 * Auth: Logan Wyatt
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate random int for n and print if positive or negative
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
