#include <stdio.h>
#include "dog.h"

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
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

}
