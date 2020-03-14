#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void pr_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void pr_int(va_list ap)
{
        printf("%i", va_arg(ap, int));
}

void pr_str(va_list ap)
{
        printf("%s", va_arg(ap, char *));
}

void pr_float(va_list ap)
{
        printf("%f", va_arg(ap, double));
}

/**
 * print_all - check the code for Holberton School students.
 * @
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	opt ops[] = {
		{"c", pr_char},
                {"i", pr_int},
                {"s", pr_str},
                {"f", pr_float},
		{NULL, NULL}
	};


	va_list ap;

	int a = 0, b = 0;

	va_start(ap, format);

	while (format[a])
	{
		while (b < 4)
		{
			if (format[a] == ops[b].op[0])
			{
				ops[b].f(ap);
			}
			b++;
		}
		a++;
		b = 0;
	}
	printf("\n");
}
