#include <stdio.h>

/**
 * _pow_recursion - a variable to the power of other variable.
 * @x: number to multiply.
 * @y: number of times to multiply x by itself.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
