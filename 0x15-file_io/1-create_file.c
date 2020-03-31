#include "holberton.h"

/**
 * create_file - creates a file and writes into it.
 * @filename: file to create and write into.
 * @text_content: text to write into file.
 *
 * Return: Always -1 if fails or 1 if succeeds.
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, written = 0, length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	written = write(fd, text_content, length);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
