/*
 * File: 3-print_alphabets.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print [a..z] [A..Z] followed by new line
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
