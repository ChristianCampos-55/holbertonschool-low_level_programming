#include "lists.h"

/**
 * free_listint2 - frees a listint.
 * @head: pointer to adress of list to free.
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (*head)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}

	*head = NULL;
}
