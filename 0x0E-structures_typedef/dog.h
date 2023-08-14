#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Info on a dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif
