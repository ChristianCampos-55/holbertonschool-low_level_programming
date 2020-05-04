#include "holberton.h"

/**
 * _puts - prints a string.
 * @str: string to print.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int print;

	for (print = 0; str[print] != '\0'; print++)
	{
		_putchar(str[print]);
	}
	_putchar('\n');
}
