#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy a string.
 * @str: string to copy.
 * Return: Pointer to new string or Null if fail.
 */
char *_strdup(char *str)
{
	char *nstr;
	int a = 0;
	int b;

	while (str[a])
	{
		a++;
	}

	if (str == NULL)
		return (NULL);

	nstr = malloc((a + 1) * sizeof(char));

	if (nstr == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		nstr[b] = str[b];
	}

	return (nstr);
}
