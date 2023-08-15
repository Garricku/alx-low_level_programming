#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees all dogs/ struct dog.
 * @d: Struct dog to be freed.
 * Return: Void 0 (Success).
 */

void free_dog(dog_t *d)
{
	dog_t d;
	free(d);
	return (0);
}
