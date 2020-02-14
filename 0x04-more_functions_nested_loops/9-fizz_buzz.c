#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int a = 0;
int b = 100;

while (a < b)
{
a++;
if (a != 1)
{
printf(" ");
}
if (a % 3 == 0)
{
printf("Fizz");
}
if (a % 5 == 0)
{
printf("Buzz");
}
if (!(a % 3 == 0 || a % 5 == 0))
{
printf("%i", a);
}
}
}
