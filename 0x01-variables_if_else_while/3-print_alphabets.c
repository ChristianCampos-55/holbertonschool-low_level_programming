#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int m;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar(10);
	return (0);
}
