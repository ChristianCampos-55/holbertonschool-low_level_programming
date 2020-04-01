#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments passed.
 * @av: vector of arguments passed.
 *
 * Return: 0.
 */

int main(int ac, char **av)
{
	int file_from = 0, file_to = 0, written = 0, red = 0;
	char buff[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]), exit(98);
	file_to = open(av[2], O_TRUNC | O_CREAT | O_RDWR, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
			av[2]), exit(99);
	red = read(file_from, buff, 1024);
	if (red == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]), exit(98);
	written = write(file_to, buff, red);
	if (written == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
			av[2]), exit(99);
	close(file_from);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]);
		exit(100);
	close(file_to);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]);
		exit(100);
	return (0);
}
