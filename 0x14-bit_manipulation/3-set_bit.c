#include "holberton.h"

/**
 * set_bit - changes a bit in a specific location to 1.
 * @n: number whose bit will be changed.
 * @index: location of bit to change.
 *
 * Return: changed number or -1 if it fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > ((sizeof(n)) * (sizeof(long))))
		return (-1);

	else
	{
		temp = 1 << index;
		*n = *n | temp;
		return (1);
	}
}
