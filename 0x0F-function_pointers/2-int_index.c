#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - finds an integer
 * @array: list of numbers to search
 * @size: size of array
 * @cmp: function to compare
 * Return: 0 always.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)

		for (a = 0; a < size; a++)
		{
			cmp(array[a]);
			if (cmp(array[a]) != 0)
				return (a);
		}
	return (-1);
}
