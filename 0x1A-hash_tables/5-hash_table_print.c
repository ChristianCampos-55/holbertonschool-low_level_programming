#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: table to print
 * Return: Zilch.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;

	if (!ht)
		return;

	printf("{");
	for (; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			if (index > 0)
				printf(", ");
			printf("'%s': '%s'", (ht->array[index])->key,
			       (ht->array[index])->value);
			ht->array[index] = (ht->array[index]->next);
		}
	}
	printf("}\n");
}
