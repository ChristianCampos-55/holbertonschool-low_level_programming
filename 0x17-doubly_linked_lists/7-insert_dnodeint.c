#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index on DLL
 * @h: DP to DLL.
 * @idx: index for new node.
 * @n: data to be added to new node.
 *
 * Return: Adress to new node or NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cntr = 1;
	dlistint_t *dexer = (*h);
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (cntr < idx)
	{
		cntr++;
		dexer = dexer->next;
	}
	new_node->next = dexer->next;
	new_node->prev = dexer->prev;
	dexer->next = new_node;
	return (new_node);
}
