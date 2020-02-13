#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 9; b++)
	{

		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
