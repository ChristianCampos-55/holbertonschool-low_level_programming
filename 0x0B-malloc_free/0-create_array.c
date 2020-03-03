#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @size: size of the array.
 * @c: character to print in first index.
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *array;

	array = (char *)malloc(size * sizeof(char));

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	return (array);
}
