/*
 * file: 9-fizz_buzz.c
 * auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print int 1-100 where:
 * 	       multiples of 3 prints Fizz
 * 	       multiples of 5 prints Buzz
 * 	       multiples of both print Fizz Buzz
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n == (n % 3 == 0))
			printf("Fizz ");
		else if (n == (n % 5 == 0))
			printf("Buzz ");
		else if (n == (n % 15 == 0))
			printf("Fizz Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
