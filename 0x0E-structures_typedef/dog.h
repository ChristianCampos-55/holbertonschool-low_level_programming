#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct of type dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of owner.
 *
 * Description: struct that takes dog info and assigns it to a struct.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
