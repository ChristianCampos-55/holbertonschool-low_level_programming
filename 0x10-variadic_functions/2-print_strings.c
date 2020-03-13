#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a string.
 * @separator: char to separate strings.
 * @n: number of strings to print.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	char *string;
	unsigned int it;

	va_start(ap, n);

	for (it = 0; it < n; it++)
	{
		string = va_arg(ap, char *);
		printf("%s", string);
		if ((it < (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
