#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Includes or updates an element in the hash table
 * @ht: Pointer to hash table
 * @key: key to include in table
 * @value: data associated to the key
 * Return: 1 if succeded, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position = 0;
	hash_node_t *adder = NULL, *val_add = NULL;

	if (!ht || !key || !value || key == '\0')
		return (0);

	position = key_index((unsigned char *)key, ht->size);
	adder = ht->array[position];

	while (adder != '\0')
	{
		if (strcmp(key, adder->key) == 0)
		{
			free(adder->value);
			adder->value = strdup(value);
			return (1);
		}
		else
			adder = adder->next;
	}

	val_add = malloc(sizeof(hash_node_t));
	if (!val_add)
		return (0);

	val_add->key = strdup(key);
	val_add->value = strdup(value);
	val_add->next = ht->array[position];
	ht->array[position] = val_add;
	return (1);
}
