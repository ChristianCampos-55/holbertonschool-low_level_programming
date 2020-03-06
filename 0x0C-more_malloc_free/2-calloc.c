#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - assings space in memory for an array.
 * @nmemb: lenght of the array.
 * @size: type of byte for array.
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int a;

if (nmemb == 0)
return (NULL);

if (size == 0)
return (NULL);

p = malloc(sizeof(size) * nmemb);
if (p == NULL)
return (NULL);

for (a = 0; a < (size * nmemb); a++)
p[a] = 0;

return (p);
}
