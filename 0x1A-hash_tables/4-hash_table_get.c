#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: Returns the value paired eith key, or NULL if failed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position = 0;

	if (!ht || !key || key == '\0')
		return (NULL);

	position = key_index((unsigned char *)key, ht->size);

	while (ht->array[position])
	{
		if (strcmp(key, (ht->array[position])->key) == 0)
			return ((ht->array[position])->value);
	        ht->array[position] = (ht->array[position])->next;
	}

	return (NULL);
}
