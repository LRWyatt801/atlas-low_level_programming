/*
 * File: 7-print_tebahpla.c
 * Auth: Logan Wyatt
 */

#include<stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
