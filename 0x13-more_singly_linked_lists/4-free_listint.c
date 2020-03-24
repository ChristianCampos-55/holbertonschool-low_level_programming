#include "lists.h"

/**
 * free_listint - frees lisint's memory.
 * @head: pointer to list to free.
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	if (head)
		free_listint(head->next);
	free(head);
}
