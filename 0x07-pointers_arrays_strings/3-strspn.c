#include "holberton.h"

/**
 * _strspn - print the byte length of a substring.
 * @s: main string
 * @accept: substring
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{

int a;
int b;
unsigned int n = 0;

for (a = 0; accept[a] != '\0'; a++)
{
for (b = 0; b < 5; b++)
{
if (accept[a] == s[b])
{
n = n + 1;
}
}
}
return (n);
}
