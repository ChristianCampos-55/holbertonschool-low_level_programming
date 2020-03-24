#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to adress of node to delete.
 *
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int a;

	if (!temp || !head)
		return (0);

	a = temp->n;
	*head = temp->next;

	free(temp);

	return (a);
}
