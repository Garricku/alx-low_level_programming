#include <stdio.h>
#include "main.h"

struct dog
{
	char *name;
	float age;
	char *owner;
};

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
	void **p;

	p = &d;

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (**p);
}