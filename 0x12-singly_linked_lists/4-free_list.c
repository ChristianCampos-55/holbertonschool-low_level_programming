#include "lists.h"

/**
 * free_list - frees the linked list.
 * @head: pointer to first list element.
 * Return: void.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
