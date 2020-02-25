#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char.
 * @s: pointer to a pointer to use.
 * @to: pointer to a value which will be pointed to.
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
*s = to;
}
