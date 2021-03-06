#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list.
 * @head: pointer to the address of the head of the node.
 * @n: data to add.
 *
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
