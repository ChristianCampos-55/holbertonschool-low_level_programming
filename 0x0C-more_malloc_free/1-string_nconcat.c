#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings and returns a pointer.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 * @n: number of characters in second string to concatenate.
 *
 * Return: a pointer to the new concatenated string or a NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count = 0;
	unsigned int a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
	{}

	for (b = 0; b < n && s2[b] != '\0'; b++)
	{}

	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
	{
		p[count] = s1[a];
		count++;
	}

	for (a = 0; a < b; a++)
	{
		p[count] = s2[a];
		count++;
	}
	p[count] = '\0';
	return (p);
}
