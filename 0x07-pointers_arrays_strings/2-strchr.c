#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a charater in a string.
 * @s: String to search for charater.
 * @c: Charater to search for.
 * Return: A pointer to first occurrence of the charater, else NULL.
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	return (NULL);
}
