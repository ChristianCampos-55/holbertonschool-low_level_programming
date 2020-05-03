#include "lists.h"

/**
 * free_dlistint - frees a DLL list.
 * @head: Pointer to head of list.
 *
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t cleaner;

	cleaner = head;
	while (cleaner->next)
	{
		free(cleaner);
		cleaner->next;
	}
}
