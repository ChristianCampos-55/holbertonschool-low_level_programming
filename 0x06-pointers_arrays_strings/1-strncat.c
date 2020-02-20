#include "holberton.h"

/**
 * _strncat - concatenate two strings.
 * @dest: String to copy to.
 * @src: String to copy from.
 * @n: Number of elements to overwite.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int add = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (src[add] != '\0' && add < n)
	{
		dest[count + add] = src[add];
		count++;
		add++;
	}
	return (dest);
}
