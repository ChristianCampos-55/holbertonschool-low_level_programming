#include <stdio.h>
/**
 * main - func to return all arguments in main.
 * @argc : count argument.
 * @argv : vector argument.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int a;

for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
