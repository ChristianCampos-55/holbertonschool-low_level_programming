#include <stdarg.h>
#include <stdio.h>

typedef struct printer
{
	char s;
	void (*f)(va_list);
} pr;

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

void print_str(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_all(const char * const format, ...)
{
	pr array[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_str},
		{'f', print_float},
		{NULL, NULL}
	};
	va_list ap;
	char  *s = "";

	int a = 0, b = 0;

	va_start (ap, format);

	while (format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == (array[b]).s)
			{
				printf("%s", s);
				(array[b]).f(ap);
				s = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'H', 0, "lberton");
	return (0);
}
