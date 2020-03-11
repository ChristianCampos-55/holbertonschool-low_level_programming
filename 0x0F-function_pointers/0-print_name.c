/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: function of named printed.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
