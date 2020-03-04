#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a two dimensional grid.
 * @width: width of grid.
 * @height: height of grid.
 *
 * Return: pointer to 2d grid or null if something fails.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));

		if (ptr[a] == NULL)
		{
			for (c = 0; c < a; c++)
			{
				free(ptr[c]);
			}
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
