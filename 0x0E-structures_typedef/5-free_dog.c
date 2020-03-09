#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - func to free struc dog.
 * @dog_t: struct dog to free.
 * @d: pointer to struct.
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
