#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * key_index - Creates index for a key
 * @key: key to create index for
 * @size: Size of array
 * Return: Index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
