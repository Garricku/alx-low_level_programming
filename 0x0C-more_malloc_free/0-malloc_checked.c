#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The amount of memory to allocate in bytes.
 * Return: A pointer to the allocated memory or (98) if fail.
 */

void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
	{
		free(mal);
		exit (98);
	}

	return (mal);
}
