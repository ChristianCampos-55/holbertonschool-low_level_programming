#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number which bit will be examined.
 * @index: location of bit to examine.
 *
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n)) * (sizeof(long))))
		return (-1);

	else
		return ((n >> index) & 1);
}
