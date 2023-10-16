#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: String to be searched.
 * @needle: Substrong to be found.
 * Return: Pointer to the beginning of the located substring, else NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')

		return (haystack);

		haystack++;
	}

	return (NULL);
} 
