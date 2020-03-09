#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - func to free struc dog.
 * @d: pointer to struct.
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
