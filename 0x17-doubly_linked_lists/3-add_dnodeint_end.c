#include "lists.h"

/**
 * add_nodeint_end - adds node at end of DLL.
 * @head: DP to head of DLL.
 * @n: data to add to new node.
 *
 * Return: Null, or adress of new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = (*head);
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}

	while (last->next)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
