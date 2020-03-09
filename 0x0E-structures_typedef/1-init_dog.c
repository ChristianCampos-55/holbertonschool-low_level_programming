#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type dog.
 * @d: calls struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of owner.
 *
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
