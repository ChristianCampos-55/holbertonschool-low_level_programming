#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: lines to print
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int times = 0;

	while (times < n)
	{
		_putchar('_');
		times++;
	}
	_putchar('\n');
}
