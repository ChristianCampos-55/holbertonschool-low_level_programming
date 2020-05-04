#include "holberton.h"

/**
 * _strpbrk - save the addres of a found char
 * @s: String to find a char in
 * @accept: Char to find
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
