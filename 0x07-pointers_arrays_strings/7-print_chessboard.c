#include "holberton.h"

/**
 * print_chessboard - function to print a chessboard.
 * @a: 2 dimensional array to print.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
  int b;
  int c;

  for (b = 0; b <= 7; b++)
    {
      for (c = 0; c <= 7; c++)
	{
	  _putchar(a[b][c]);
	}
      _putchar('\n');
    }
}
