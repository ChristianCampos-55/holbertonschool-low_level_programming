#include "holberton.h"

/**
 * rev_string - func to reverse a string.
 * @s: string to be reversed.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int start;
int end;
int safe;

for (end = 0; s[end] != '\0'; end++)
{
}
end = end - 1;
for (start = 0; start < end; start++)
{
safe = s[start];
s[start] = s[end];
s[end] = safe;
end--;
}
}
