#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to be copied to.
 * @src: string to copy from.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int add;

	for (count = 0; dest[count] != '\0'; count++)
	{
	}

	for (add = 0; add <= count && src[add] != '\0'; add++)
	{
		dest[count + add] = src[add];
	}
	return (dest);
}
