#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data un a DLL.
 * @head: pointer to head of DLL
 *
 * Return: Sum, or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int cont = 0;

	if (!head)
		return (0);

	while (head)
	{
		cont += head->n;
		head = head->next;
	}

	return (cont);
}
