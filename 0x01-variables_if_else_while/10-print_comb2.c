#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;
	int d;

	for (u = '0'; u <= '9'; u++)
{
	for (d = '0'; d <= '9'; d++)
	{
		putchar(u);
		putchar(d);
		if (u != '9' || d != '9')
			putchar(44);
		putchar(32);
	}
}
	putchar(10);
	return (0);
}
