#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 * Return: Null if fails. Or new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i;

	p = malloc(sizeof(dog_t));
	
	for (i = 0; name[i] != '\0'; i++)
	{
		p->name = name;
	}

	for (i = 0; owner[i] != '\0'; i++)
	{
		p->owner = owner;
	}

	if (p == NULL)
	{
		return (NULL);
	}

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
