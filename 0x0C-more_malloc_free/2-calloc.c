#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - assings space in memory for an array.
 * @nmemb: lenght of the array.
 * @size: type of byte for array.
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0)
		return (0);

	if (nmemb == 0)
		return (0);

	p = malloc(sizeof(size) * nmemb);
	if (p == NULL)
		return (NULL);

	return (p);
}
