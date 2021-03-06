#include "variadic_functions.h"
/**
 * sum_them_all - func to sum all parameters received.
 * @n: number of parameters to receive.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int it;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (it = 0; it < n; it++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
