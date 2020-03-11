#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes functions given as parameters
 * @array: array of parameters
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
