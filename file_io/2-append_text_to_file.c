#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to create
 * @text_content: string of text
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		count = write(file, text_content, strlen(text_content));
		if (count == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
