#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head to DLL
 *
 * Return: EXIT_SUCCESS, EXIT_FAILURE on failure.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
