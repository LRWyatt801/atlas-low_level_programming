#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text and prints to POSIX stdout
 * @filename: textfile
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *	   file could not open = 0
 *	   filename is NULL = 0
 *	   write fails = 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print;
	ssize_t file, count, ready;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	print = malloc(sizeof(char) * letters);
	ready = read(file, print, letters);
	count = write(STDOUT_FILENO, print, ready);

	free(print);
	clost(file);
	return (count);
}
