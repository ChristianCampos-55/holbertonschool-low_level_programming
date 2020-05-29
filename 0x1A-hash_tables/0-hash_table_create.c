#include "hash_tablel.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of hash table.
 * Return: Nodes created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = NULL;
	unsigned long int a = 0;

	hasht = malloc(sizeof(hash_table_t));
	if (!hasht)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);

	if (hasht->array == NULL)
		return (NULL);

	while (a < size)
	{
		hasht->array[a] = NULL;
		a++;
	}

	return (hasht);
}
