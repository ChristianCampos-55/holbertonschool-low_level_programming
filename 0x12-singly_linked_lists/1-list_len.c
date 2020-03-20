#include "lists.h"

/**
 * list_len - counts number of nodes.
 * @h: list.
 * Return: num of nodes.
 *
 */
size_t list_len(const list_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
		h = h->next;

	return (counter);
}
