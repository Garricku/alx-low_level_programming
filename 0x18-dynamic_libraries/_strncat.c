#include "main.h"

/**
 * _strncat - Concatenate string 1 and n amount of bytes string 2.
 *
 * @dest: String 1 and destination of result.
 * @src: String two, to be checked for n number of bytes
 * @n: Amount of bytes to be checked for.
 * Return: dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
	p++;
	}

	while (*src != '\0' && n > 0)
	{
	*p = *src;
	p++;
	src++;
	n--;
	}

	*p = '\0';
	return (dest);
}
