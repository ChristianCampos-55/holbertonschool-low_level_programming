#include "holberton.h"

/**
 * leet - replace vocals with numbers.
 * @s: string whose vocals will be replaced.
 * Return: Always 0.
 */
char *leet(char *s)
{
char let[5] = "aeotl";
char num[5] = "43071";
int a, b;

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b < 5; b++)
{
if (s[a] == let[b] || s[a] == (let[b] - 32))
{
s[a] = num[b];
}
}
}
return (s);
}
