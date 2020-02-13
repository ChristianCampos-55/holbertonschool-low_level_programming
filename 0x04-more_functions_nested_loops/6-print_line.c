#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: lines to print
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
