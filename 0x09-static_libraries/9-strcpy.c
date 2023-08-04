#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src, including null byte.
 *
 * @dest: The destination of the coppied string.
 * @src: The sting to be coppied.
 *
 * Return: To dest (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
