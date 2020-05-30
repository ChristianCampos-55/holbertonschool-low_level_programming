#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - func to delete a hash table
 * @ht: hashtable to delete
 * Return: Zilch
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int position = 0;
	hash_node_t *iter = NULL;

	if (!ht)
		return;

	for (; position < ht->size; position++)
	{
		while (ht->array[position])
		{
			iter = (ht->array[position])->next;
			free((ht->array[position])->key);
			free((ht->array[position])->value);
			free(ht->array[position]);
			ht->array[position] = iter;
		}
	}
	free(ht->array);
	free(ht);
}
