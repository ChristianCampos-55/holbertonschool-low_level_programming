#include <stdio.h>

/**
 * _aux_func - check the code for Holberton School students.
 * @n: number to find the sqare root of.
 * @m: number to count from.
 * Return: Always 0.
 */
int _aux_func(int n, int m)
{
	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	if ((m * m) > n)
		return (-1);

	if (m * m == n)
		return (m);

	return (_aux_func(n, m + 1));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: number to find the sqare root of.
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (_aux_func(n, 0));
}
