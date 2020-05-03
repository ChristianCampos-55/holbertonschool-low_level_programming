#include "lists.h"

/**
 * dlistint_len - calculates number of elements in a DLL.
 * @h: head to the DLL.
 *
 * Return: nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
