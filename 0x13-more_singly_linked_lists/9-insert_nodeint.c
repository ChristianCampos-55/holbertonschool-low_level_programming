#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head: pointer to address of head of list in which the node will be added.
 * @idx: index where the node should be added.
 * @n: int to add to list.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int counter = 0;
	listint_t *new = *head;

	if (!head)
		return (NULL);

	while (counter < idx && new)
	{
		temp = new;
		new = new->next;
		counter++;
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = temp;
		*head = new;
	}

	return (new);
}
