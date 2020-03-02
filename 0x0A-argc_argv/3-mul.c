#include <stdio.h>
#include <stdlib.h>
/**
 * main - func to multiply two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 for success and 1 for error.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
}
 return (0);
}
