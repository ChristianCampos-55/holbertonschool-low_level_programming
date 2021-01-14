#include "search_algos.h"
/**
 * arr_printer - function to print an array.
 * @array: Pointer to the first element of the array.
 * @size: length array.
 * Return: void.
 */
void arr_printer(int *array, size_t start, size_t end)
{
  unsigned count;

  printf("Searching in array: ");
  for (count = start; count <= end; count++)
    {
      printf("%i", array[count]);
      if (count == end)
	printf("\n");
      else
	printf(", ");
    }
}

/**
 * binary_search - Function searches for a specific value in an array
 * using binary search algorithm.
 * @array: Pointer to first element of array.
 * @size: Length of array.
 * @value: Value to find.
 * Return: Index where value is located, -1 if it fails.
 */
int binary_search(int *array, size_t size, int value)
{
  unsigned int start = 0, end = size - 1, tmp = 0;

  if (array == NULL || size == 0)
    return (-1);
  while (start <= end)
  {
    arr_printer(array, start, end);
    tmp = (start + end) / 2;
    if (array[tmp] == value)
      return (tmp);
    else if (array[tmp] > value)
      end = tmp - 1;
    else
      start = tmp + 1;
  }
  return (-1);
}
