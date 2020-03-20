#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the start of the list.
 * @head: pointer to first element of list.
 * @str: string to add.
 * Return: pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int counter;

	new = malloc(sizeof(list_t));
	if(new == NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
	{}

	new->str = strdup(str);
	new->len = counter;
	new->next = *head;
	*head = new;
}
