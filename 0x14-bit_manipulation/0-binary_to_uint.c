#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: binary to convert.
 *
 * Return: converted unsigned int or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int it = 0;
	int exp = 1;
	int tmp = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (; b[it]; it++)
	{}
	it -= 1;

	for (; it >= 0; it--, exp *= 2)
	{
		if (b[it] == '0' || b[it] == '1')
		{
			tmp = (b[it] - 48) * exp;
			sum += tmp;
		}
		else
			return (0);
	}
	return (sum);
}
