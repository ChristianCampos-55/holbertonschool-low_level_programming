#include "lists.h"

/**
 * beforeMain - function that prints text before main.
 *
 *Return: void.
 */

void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
