#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: First character to compare.
 * @s2: Second character to compare.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
