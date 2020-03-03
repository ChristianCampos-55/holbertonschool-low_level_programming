#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in one.
 * @s1: string 1.
 * @s2: string 2;
 * Return: return pointer or Null if fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *sum;
	int a = 0;
	int b = 0;
	int c = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	sum = malloc(((a + b + 1)) * sizeof(char));

	if (sum == NULL)
		return (NULL);

	a = 0;
	b = 0;

	while (s1[a])
	{
		sum[c] = s1[a];
		a++;
		c++;
	}
	sum[c] = ' ';

	while (s2[b])
	{
		sum[c] = s2[b];
		b++;
		c++;
	}
	sum[c] = '\0';

	return (sum);
}
