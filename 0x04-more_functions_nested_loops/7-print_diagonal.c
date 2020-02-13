#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: Lines to iterate vertically and horizontally
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	while (a < n)
	{
		for (b = 0; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		a++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
