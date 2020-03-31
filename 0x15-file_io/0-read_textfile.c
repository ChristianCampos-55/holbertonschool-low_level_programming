#include "holberton.h"

/**
 * read_textfile - reads and writes what is in a text file.
 * @filename: file to read and write from.
 * @letters: number of characters to write from filename file.
 *
 * Return: 0 if it fails or number of characters read and writen.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, red = 0, written = 0;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc((sizeof(letters)) * (letters + 1));
	if (!buff)
		return (0);

	red = read(fd, buff, letters);
	written = write(STDOUT_FILENO, buff, red);

	close(fd);
	return (written);
}
