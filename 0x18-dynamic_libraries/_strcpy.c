#include "holberton.h"

/**
 * _strcpy - create an strcpy.
 * @dest: destination string.
 * @src: source to be copied.
 *
 *Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
	dest[cont] = src[cont];
	return (dest);
}
