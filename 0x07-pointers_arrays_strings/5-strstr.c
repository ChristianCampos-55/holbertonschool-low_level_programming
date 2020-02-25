#include "holberton.h"

/**
 * *_strstr - find a string inside another.
 * @haystack: string to search in.
 * @needle: string to search.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int safe;

while (*haystack)
{
for (safe = 0; needle[safe]; safe++)
if (needle[safe] != haystack[safe])
break;
if (!(needle[safe]))
return (haystack);
haystack++;
}
return (0);
}
