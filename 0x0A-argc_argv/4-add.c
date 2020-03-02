#include <stdio.h>
#include <stdlib.h>
/**
 * main - func to add two positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
int suma = 0;
int a;
int b;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < 48 || argv[a][b] > 57)
{
printf("Error\n");
return (1);
}
}
suma += atoi(argv[a]);
}
printf("%d\n", suma);
return (0);
}
