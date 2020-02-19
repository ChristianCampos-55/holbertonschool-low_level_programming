#include "holberton.h"

/**
 * puts2 - prints every pair of a string.
 * @str: string which pairs will be printed.
 * Return: Always 0.
 */

void puts2(char *str)

{
int length;
int jump;

for (length = 0; str[length] != '\0'; length++)
{
}
for (jump = 0; jump < length; jump++)
{
_putchar(str[jump]);
jump++;
}
_putchar('\n');
}
