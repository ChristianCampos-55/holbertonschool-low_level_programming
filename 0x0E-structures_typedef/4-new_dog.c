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
	for (b = 0; b < a; b++)
		namenew[b] = name[b];
	namenew[b] = '\0';
	for (a = 0; owner[a]; a++)
	{}
	ownernew = malloc((a + 1) * sizeof(char));
	if (ownernew == NULL)
	{
		free(namenew);
		return (NULL);
	}
	for (b = 0; b < a; b++)
		ownernew[b] = owner[b];
	ownernew[b] = '\0';

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(namenew);
		free(ownernew);
		return (NULL);
	}
	ndog->name = namenew;
	ndog->age = age;
	ndog->owner = ownernew;
	return (ndog);
}
