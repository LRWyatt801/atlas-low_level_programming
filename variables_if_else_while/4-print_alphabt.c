/*
 * File: 4-print_alphabt.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n')

	return (0);
}
