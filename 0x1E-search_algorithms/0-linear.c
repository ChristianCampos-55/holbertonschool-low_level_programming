#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: Pointer to start of array
 * @size: Number of elements in array
 * @value: Value to search
 * Return: Index of array in which value was found or -1 upon failure
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int countula;

	if (!array)
		return (-1);

	for (countula = 0; countula < size; countula++)
	{
		printf("Value checked array[%lu] = [%countula]\n", countula, array[countula]);
		if (array[countula] == value)
			return (countula);
	}
	return (-1);
}
