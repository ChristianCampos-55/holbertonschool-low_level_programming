#include "holberton.h"

/**
 * clear_bit - changes a bit in a specific location to 0.
 * @n: number whose bit will be changed.
 * @index: location of bit to change.
 *
 * Return: 1 if change was succesfull, -1 if it wasn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > ((sizeof(n))) * (sizeof(long)))
		return (-1);

	else
	{
		temp = 1 << index;
		*n = *n & ~temp;
		return (1);
	}
}
