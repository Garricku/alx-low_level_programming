#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The first string and destination of the concatenated string.
 * @src: The source of the second string to be added to first string.
 *
 * Return: (Success)
 */

char *_strcat(char *dest, char *src)
{

	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';
	return (dest);
}
