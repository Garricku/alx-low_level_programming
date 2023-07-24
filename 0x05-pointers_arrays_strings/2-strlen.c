#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to be checked for length of chars.
 *
 * Return: (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
