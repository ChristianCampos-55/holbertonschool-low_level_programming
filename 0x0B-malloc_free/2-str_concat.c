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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	sum = malloc(((a + b + 1)) * sizeof(char));
	if (sum == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
	{
		sum[a] = s1[a];
	}
	for (b = 0; s2[b]; b++)
	{
		sum[a + b] = s2[b];
	}
	sum[a + b] = '\0';
	return (sum);
}
