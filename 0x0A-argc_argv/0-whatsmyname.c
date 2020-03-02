#include <stdio.h>
/**
 * main - a function that can call its own name.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
(void)argc;
return (0);
}
