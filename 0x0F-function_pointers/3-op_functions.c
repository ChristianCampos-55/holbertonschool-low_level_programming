#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: result of operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: result of operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: result of operation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: result of operation.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - takes module of two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: result of operation.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
