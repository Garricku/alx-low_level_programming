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

	char array[size] = {c};

	if (size == 0)
	{
		return (0);
	}
	p = (char*)malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		return (p);
	}
}
