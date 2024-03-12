#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string of text
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		count = write(file, text_content, strlen(textcontent));
		if (count == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
