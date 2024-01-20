/*
 * File: 2-print_alphabet.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print alphabet followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
