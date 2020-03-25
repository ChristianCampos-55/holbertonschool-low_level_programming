#include "lists.h"

/**
 * free_listint2 - frees a listint.
 * @head: pointer to adress of list to free.
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
