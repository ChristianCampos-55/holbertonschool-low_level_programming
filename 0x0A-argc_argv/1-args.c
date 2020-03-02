#include <stdio.h>
/**
 * main - Function that counts itself.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
  printf("%d\n", argc - 1);
  (void) argv;
  return (0);
}
