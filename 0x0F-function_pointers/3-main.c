#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - executes basic operations.
 * @argc: number of arguments received
 * @argv: arguments received.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = get_op_func(argv[2])(x, y);
	printf("%i\n", z);
	return (0);
}
