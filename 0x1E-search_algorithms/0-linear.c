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
  unsigned int cntula;

  if (!array)
    return (-1);

  for (cntula = 0; cntula < size; cntula++)
    {
      printf("Value checked array[%d] = [%d]\n", cntula, array[cntula]);
      if (array[cntula] == value)
	return (cntula);
    }
  return (-1);
}
