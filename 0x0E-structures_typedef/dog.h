#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - Info on a dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
