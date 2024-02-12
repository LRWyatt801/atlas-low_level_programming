/*
 * file: 4-add.c
 * auth: Logan Wyatt
 */

#include "main.h"
#include <ctype.h>

/**
 * main - adds up positive int inputs
 * @argc: number of inputs
 * @argv: array of inputs
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
