#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to memory allocated of  a certain lenght.
 * @b: lenght of memory to alocate.
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
