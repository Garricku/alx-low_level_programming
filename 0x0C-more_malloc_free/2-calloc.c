#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Array of elements.
 * @size: Array size or amount of elements.
 * Return: Pointer to the allocated memory or NULL if fail.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	array = malloc(total);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		((char *)array)[i] = 0;
	}

	return (array);
}
