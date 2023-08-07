#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initializes with specific char.
 * @size: Size of the array.
 * @c: The specific chars to initialze to the array.
 * Return: NULL if size = 0, returns a pointer to array or NULL if fail.
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
