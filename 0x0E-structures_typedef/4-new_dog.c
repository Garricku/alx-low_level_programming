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
	char *dogsname, *dogsowner;
	int len = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	len = strlen(name);
	dogsname = malloc(sizeof(char) * (len + 1));
	if (name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(dogsname, name);

	len = strlen(owner);
	dogsowner = malloc(sizeof(char) * (len + 1));
	if (owner == NULL)
	{
		free(newDog);
		free(dogsname);
		return (NULL);
	}
	strcpy(dogsowner, owner);
	init_dog(newDog, dogsname, age, dogsowner);
	if (newDog == NULL)
	{
		free(newDog);
		free(dogsname);
		free(dogsowner);
		return (NULL);
	}
	return (newDog);
}
/**
 * strlen - Counts the length of a string.
 * @string: The string to be counted.
 * Return: The length of the string.
 */
unsigned long int strlen(const char *string)
{
	unsigned long int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}
/**
 * strcpy - Copies a string contents.
 * @copy: The copy of the string.
 * @original: the Original string to be copied.
 * Return: Pointer to the copied string.
 */
char *strcpy(char *copy, const char *original)
{
	int i = 0;

	while (original[i] != '\0')
	{
		copy[i] = original[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
