/*
 * file: 3-mul.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * main - multiply to numbers followed by new line
 * @argc: number of arguments
 * @argv: array of inputs
 *
 * Return: 0 on success or 1 on error
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
