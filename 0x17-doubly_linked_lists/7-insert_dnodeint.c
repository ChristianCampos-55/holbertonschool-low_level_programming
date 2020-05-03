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
	unsigned int cntr = NULL;
	dlistint_t *dexer = (*h);
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (!(*h))
	{
		*(h) = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (cntr = 0; cntr < idx; cntr++)
		dexer = dexer->next;

	dexer = dexer->prev;
	(dexer->prev)->next = new_node;
	new_node->next = dexer->next;
	new_node->prev = dexer->prev;
	(dexer->next)->prev = new_node;
	new_node->n = n;
	return (new_node);
}
