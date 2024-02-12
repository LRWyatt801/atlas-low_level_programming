/*
 * file: 0-whatsmyname.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * main - prints the name of program
 * @argc: count of array
 * @argv: array of std inputs
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
