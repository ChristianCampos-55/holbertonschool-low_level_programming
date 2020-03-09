#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: creates dog's name.
 * @age: creates dog's age.
 * @owner: adds dog owner.
 * Return: ndog or NULL if malloc fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
