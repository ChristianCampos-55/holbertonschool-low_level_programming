#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a specific node of a DLL.
 * @head: DP to DLL.
 * @index: node to delete.
 *
 * Return: 1 if success, -1 if you are a waste of a programmer.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	unsigned int countr;
	dlistint_t *dummy = (*head);

	if (!(*head))
		return (-1);

	if (index == 0 && (*head)->next != NULL)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}

	else if ((*head)->next == NULL)
	{
		(*head) = NULL;
		return (1);
	}

	else
	{
		for (countr = 0; countr < index; countr++)
		{
			dummy = dummy->next;
		}

		(dummy->next)->prev = dummy->prev;
		(dummy->prev)->next = dummy->next;
		return (1);
	}

}
