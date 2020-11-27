#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash table to recieve
 * Return: Zilch
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *aux = NULL, *tmp = NULL;

	if (ht == NULL)
		return;

	for (; pos < ht->size; pos++)
	{
		if (ht->array[pos] == NULL)
			continue;

		aux = ht->array[pos];
		while (aux != NULL)
		{
			tmp = aux;
			aux = aux->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
	ht = NULL;
}
