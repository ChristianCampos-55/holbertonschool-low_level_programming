#include "holberton.h"

/**
 * _aux_func - checks if a number is prime or not.
 * @n: number to check.
 * @m: iterator that will check the number.
 * Return: Always 0.
 */
int _aux_func(int n, int m)
{
	if (m * m == n)
		return (0);

	else if (m == n)
		return (1);

	else if (n < 0)
		return (0);

	return (_aux_func(n, m + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to check.
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (_aux_func(n, 0));
}
