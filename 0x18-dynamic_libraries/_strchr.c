#include <stdlib.h>
#include "holberton.h"

/**
 * _strchr - find a specific character in a string.
 * @s: string to look in.
 * @c: character to find in string.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return(NULL);
	}
}
