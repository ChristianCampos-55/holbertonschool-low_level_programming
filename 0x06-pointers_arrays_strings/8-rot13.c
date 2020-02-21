#include "holberton.h"

/**
 * rot13 - change characters to rot13.
 * @string: string whose characters will be changed.
 * Return: Always 0.
 */
char *rot13(char *string)
{
char norm[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int a, b;

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (string[a] == norm[b])
{
string[a] = rot[b];
}
}
}
return (string);
}
