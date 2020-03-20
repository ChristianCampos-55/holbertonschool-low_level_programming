#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of the linked list.
 * list_t: list to iterate.
 * @head: pointer to head of list.
 * @str: text to add to the new node.
 * Return: head of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = 0;
	list_t *tmp = *head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new = (malloc(sizeof(list_t)));

	if (new == NULL)
		return (NULL);

	for (; str[count]; count++)
	{};

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (*head);
}
