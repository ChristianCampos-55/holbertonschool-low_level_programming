#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - puts arguments passed to func to a string.
 * @ac: argument count.
 * @av: arguments array.
 *
 * Return: arguments in string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
int a, b;
int count = 0;
char *ptr = NULL;

if (ac == 0 || av == 0)
return (NULL);

for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
count++;
}
}

ptr = malloc(count *sizeof(char));
if (ptr == NULL)
return (NULL);

count = 0;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
ptr[count++] = av[a][b];
count++;
}
ptr[count] = '\n';
}
ptr[count] = '\0';
return (ptr);
}
