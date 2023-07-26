#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: String destination.
 * @src: String to copy from.
 * @n: Amount of bytes to copy from src.
 *
 * Return: dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src != '\0' && n > 0)
	{
	*p = *src;
	p++;
	src++;
	n--;
	}

	while (n > 0)
	{
	*p = '\0';
	p++;
	n--;
	}

	return (dest);
}
