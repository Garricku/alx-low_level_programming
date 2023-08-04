#include "main.h"

/**
 * _memcpy - Cpoies memory area.
 * @dest: Destination of result.
 * @src: Source to copy from.
 * @n: Number of bytes to copy.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
