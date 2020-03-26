#include "holberton.h"

/**
 * print_binary - converts decimal to binary
 * @n: decimal to convert
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
