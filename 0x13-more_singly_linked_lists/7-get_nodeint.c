#include "lists.h"

/**
 * get_nodeint_at_index - returns a specific node.
 * @head: pointer to head of list.
 * @index: node number to return.
 *
 * Return: Always 0.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int counter;

	if (!temp)
		return (NULL);

	for (counter = 0; counter < index; counter++)
	{
		if (temp)
			temp = temp->next;
	}

	if (!temp)
		return (NULL);

	return (temp);
}
