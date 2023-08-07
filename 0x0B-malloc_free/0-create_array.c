#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initializes it with a specific char.
 * @size: Size of the array.
 * @c: The specific chars to initialze to the array.
 * Return: NULL if size = 0, returns a pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
	free(p);
	return (0);
}
