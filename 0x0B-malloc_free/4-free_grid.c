#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - fuction to free the space used by a two dimensional grid.
 * @grid: grid which memory will be freed.
 * @height: second dimension of grid.
 *
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
