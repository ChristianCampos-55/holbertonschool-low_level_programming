#include "holberton.h"

/**
 * *_strchr - find a specific character in a string.
 * @s: string to look in.
 * @c: character to find in string.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		s++;
		if (c == s[count])
		{
			return (s);
		}
	}
	return (0);
}
