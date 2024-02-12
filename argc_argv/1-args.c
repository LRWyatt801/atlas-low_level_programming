/*
 * file: 1-args.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * main - prints number of inputs
 * @argc: count of inputs
 * @argv: array of inputs
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void)**argv;

	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
