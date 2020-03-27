#include "holberton.h"

/**
 * get_endianness - function that determines whether system stores big or
 * little endian style.
 *
 * Return: 1 for little endian, 0 for big.
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);

	else
		return (0);
}
