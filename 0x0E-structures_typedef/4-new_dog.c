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
	int i, len1, len2;

	for (i = 0; name[i] != '\0'; i++)
	len1 = i;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->name = malloc(sizeof(char) * (len1 + 1));
	if (p->name == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (i = 0; i < len1 && name[i] != '\0'; i++)
	{
		p->name[i] = name[i];
	}
	p->name = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	len2 = i;
	p->owner = malloc(sizeof(char) * (len2 + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (i = 0; i < len2 && owner[i] != '\0'; i++)
		*p->owner = owner[i];

	p->owner[i] = '\0';
	p->age = age;
	return (p);
}
