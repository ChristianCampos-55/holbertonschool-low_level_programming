#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the code for Holberton School students.
 * @c: Character to define either upper or lower case
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
