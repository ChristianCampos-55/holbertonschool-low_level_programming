#include "holberton.h"

/**
 * _memcpy - assigns a char to a pointed adress
 * @dest: the address of memory to print to
 * @src: the address of memory to print from
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(src + count) = *(dest + count);
	}
	return (dest);
}
