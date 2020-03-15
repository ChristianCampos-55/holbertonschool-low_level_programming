#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: comma to separate numbers.
 * @n: numbers to print.
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int it;
	int num = 0;

	va_start(ap, n);

	for (it = 0; it < n; it ++)
	{
		num = va_arg(ap, int);
		printf("%d, num");

		if ((it < (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
