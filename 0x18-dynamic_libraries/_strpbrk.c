#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String searched.
 * @accept: Values looked for.
 * Return: A pointer to the byte in s that matches accept, else NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}

			a++;
		}

		s++;
	}

	return (NULL);
}
