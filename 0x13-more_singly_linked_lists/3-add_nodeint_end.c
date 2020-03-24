#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the linked list.
 * @head: pointer to address of head of struct.
 * @n: data to add.
 *
 * Return: adress of new element or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newLast = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	if (!newLast)
		return (NULL);

	newLast->n = n;
	newLast->next = NULL;

	if (temp)
	{
		while (temp-> != NULL)
			temp = temp->next;

		temp->next = newLast;
	}
	else
	{
		*head = newLast;
	}
	return (*head);
}
