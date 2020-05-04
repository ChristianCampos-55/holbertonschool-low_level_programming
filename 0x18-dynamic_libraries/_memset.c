#include "holberton.h"

/**
 * _memset - assigns a char to a pointed adress
 * @s: the address of memory to print to
 * @b: the address of memory to print from
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
