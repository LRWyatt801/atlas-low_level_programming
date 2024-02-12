/*
 * file: 2-args.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * main - prints all arguments entered
 * @argc: inputs count
 * @argv: array of inputs
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
