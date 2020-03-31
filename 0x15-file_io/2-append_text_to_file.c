#include "holberton.h"

/**
 * append_text_to_file - appends a string to a file.
 * @filename: name of the file to append text to.
 * @text_content: string to append to file.
 *
 * Return: 1 if it succeds, -1 if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, written = 0, length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	if (!text_content)
	{
		return (1);
	}

	written = write(fd, text_content, length);
	if (written == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
