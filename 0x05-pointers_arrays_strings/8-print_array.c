#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print a specific number of elements in an array.
 * @a: array which elements are to be printed.
 * @n: number of elements to print.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int length;

for (length = 0; length < n; length++)
{
if (length + 1 != n)
{
printf("%i, ", a[length]);
}
else
{
printf("%i", a[length]);
}
}
printf("\n");
}
