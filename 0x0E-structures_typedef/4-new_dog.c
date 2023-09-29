#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Intitializes a varible of type struct dog.
 * @d: Pointer to stuct dog.
 * @name: Name of dog.
 * @age: Age of dog
 * @owner: Owner of dog.
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 * Return: Null if fail, or new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	init_dog(newDog, name, age, owner);

	return (newDog);
}
