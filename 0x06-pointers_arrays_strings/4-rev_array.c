#include "holberton.h"

/**
 * reverse_array - function to reverse an array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int start;
	int cont;

	n = n - 1;
	for (start = 0; start < n; start++)
	{
		cont = a[start];
		a[start] = a[n];
		a[n] = cont;
		n--;
	}
}
