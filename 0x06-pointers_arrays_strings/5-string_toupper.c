#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @s: string of holberton.
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
