#include <stdio.h>
/**
 * main - func to return all arguments in main.
 * @argc : count argument.
 * @argv : vector argument.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int a = 0;

while(a < argc)
{
a++;
printf("%s", argv[a]);
}
return (0);
}
