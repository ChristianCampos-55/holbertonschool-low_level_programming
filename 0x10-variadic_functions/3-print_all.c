#include "variadic_functions.h"

/**
 * print_char - prints a char.
 * @ap: char to print.
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints a int.
 * @ap: int to print.
 */
void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_str - prints a string.
 * @ap: string to print.
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == '\0')
	{
		s = "(nil)";
	}
	printf("%s", s);
}

/**
 * print_float - prints a float.
 * @ap: float to print.
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_all - prints all types of data given to it.
 * @format: format specifiers.
 *
 * Return: always 0.
 */

void print_all(const char * const format, ...)
{
	opt array[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_str},
		{'f', print_float},
		{'\0', '\0'}
	};

	va_list ap;
	char *s = ", ";

	int a = 0;
	int b;

	va_start(ap, format);

	while (format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == (array[b]).op)
			{
				(array[b]).f(ap);

				if (format[a + 1] != '\0')
					printf("%s", s);
			}
			b++;
		}
		a++;
	}
	printf("\n");
}
