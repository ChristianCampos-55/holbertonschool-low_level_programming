#include "holberton.h"

/**
 * _strncat - concatenate two strings.
 * @dest: String to copy to.
 * @src: String to copy from.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	int add;

	for (count = 0; dest[count] != '\0'; count++)
	{

	}

	for (add = 0; add <= count && src[add] != '\0' && add < n; add++)
	{
		dest[count + add] = src[add];
	}
	return (dest);
}
