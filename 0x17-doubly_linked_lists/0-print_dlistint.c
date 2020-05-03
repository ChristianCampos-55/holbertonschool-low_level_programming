#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head to DLL.
 *
 * Return: nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);

	while(h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
