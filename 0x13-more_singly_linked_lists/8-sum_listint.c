#include "lists.h"

/**
 * sum_listint - summatory of all int types in list.
 * @head: pointer to list whose ints will be added.
 *
 * Return: the sum of all ints.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
