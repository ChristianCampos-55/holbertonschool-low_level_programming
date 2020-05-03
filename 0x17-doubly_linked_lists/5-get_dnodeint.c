#include "lists.h"

/**
 * get_dnodeint_at_index - returnts the nth node of a DLL.
 * @head: Pointer to head of DLL.
 * @index: node to return
 *
 * Return: Adress of node or Null if no head.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *indexer = head;
	unsigned int counter = 0;

	while (counter <= index)
	{
		indexer = indexer->next;
		counter++;
	}

	if (!indexer)
		return (NULL);

	return (indexer);
}
