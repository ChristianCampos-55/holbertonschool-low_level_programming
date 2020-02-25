#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonals of a two dimensional array.
 * @a: array to sum or subtract from.
 * @size: size of sum or substraction.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int y;
int z;
int plus = 0;
int minus = 0;

for (y = 0; y < (size * size);)
{
plus = plus + a[y];
y = y + size + 1;
}
for (z = 0; z < (size * size) - size;)
{
z = z + size - 1;
minus = minus + a[z];
}
printf("%d, %d\n", plus, minus);
}
