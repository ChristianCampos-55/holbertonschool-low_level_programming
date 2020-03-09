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
	char *namenew;
	char *ownernew;
	dog_t *ndog;

	int a, b;

	for (a = 0; name[a]; a++)
	{}

	namenew = malloc((a + 1) * sizeof(char));
	if (namenew == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		namenew[b] = name[b];
	}

	for (a = 0; owner[a]; a++)
	{}

	ownernew = malloc((a + 1) * sizeof(char));
	if (ownernew == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		ownernew[b] = owner[b];
	}

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = namenew;
	ndog->age = age;
	ndog->owner = ownernew;
	return (ndog);
}
