#include "lists.h"

/**
 * print_list - prints whatever is inside of my linked list.
 * @h: header of list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
	{
		if(h->str == '\0')
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
