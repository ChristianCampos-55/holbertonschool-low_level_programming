#include "holberton.h"

/**
 * puts_half - prints the latter half of a string.
 * @str: string which latter half will be printed.
 * Return: Always 0.
 */
void puts_half(char *str)
{
int cut;
int length;

for (length = 0; str[length] != '\0'; length++)
{
}
for (cut = ((length + 1) / 2); cut < length; cut++)
{
_putchar(str[cut]);
}
_putchar('\n');
}
