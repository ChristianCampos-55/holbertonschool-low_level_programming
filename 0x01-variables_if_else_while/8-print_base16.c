#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int h;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (h = 'A'; h <= 'F'; h++)
	{
		putchar(h);
	}
	putchar(10);
	return (0);
}
