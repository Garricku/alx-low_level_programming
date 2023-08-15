#include "main.h"
#include <stdio.h>

/**
 * print_dog - Print a struct dog.
 * @d: Struct dog, pointer.
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)\n");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)\n");
}
