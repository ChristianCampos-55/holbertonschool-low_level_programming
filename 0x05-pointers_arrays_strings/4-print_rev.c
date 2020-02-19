#include "holberton.h"

/**
 * print_rev - func to print a string in reverse.
 * @s: string to be printed.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int length;
int rev;

for (length = 0; s[length] != '\0'; length++)
{
}
for (rev = length - 1; s[rev] > 0; rev--)
{
_putchar(s[rev]);
}
_putchar('\n');
}
