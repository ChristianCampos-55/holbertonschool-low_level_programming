#include "holberton.h"

/**
 * rot13 - change characters to rot13.
 * @string: string whose characters will be changed.
 * Return: Always 0.
 */
char *rot13(char *string)
{
char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int a, b;

for (a = 0; string[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (string[a] == norm[b])
{
string[a] = rot[b];
break;
}
}
}
return (string);
}
