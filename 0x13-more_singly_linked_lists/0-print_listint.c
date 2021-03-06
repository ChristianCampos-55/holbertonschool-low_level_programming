#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head of the list to print.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
