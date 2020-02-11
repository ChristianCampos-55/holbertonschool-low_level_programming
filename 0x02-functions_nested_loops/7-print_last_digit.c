#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *@b: variable to receive
 *
 * Return: Always 0.
 */
int print_last_digit(int b)
{
	b = b % 10;
	if (b < 0)
		b = (b * -1);
	_putchar('0' + b);
		return (b);
}
