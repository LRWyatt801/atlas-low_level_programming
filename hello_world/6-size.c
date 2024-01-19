/*
 * File: 6-size.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print: Size of a char:
 *               Size of an int:
 *               Size of a long int:
 *               Size of a long long int:
 *               Size of a float:
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);

}
