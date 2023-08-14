#include <stdio.h>

/**
 * struct dog - Info on dog.
 * @name: Name of the dog.
 * @age: age of the dog.
 * @owner: Ownwer of dog
 * Discription: All details about dog is stored here.
 */

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
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (0);
}
