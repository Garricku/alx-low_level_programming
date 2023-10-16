#include "main.h"

/**
 * _strcmp - Compares two string values.
 *
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{

	/* Compare two strings character by character */
	while (*s1 != '\0' && *s2 != '\0')
	{

	/* If a difference is found, return the difference of the charaters */
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}

	/* Move to the next character */
	s1++;
	s2++;
	}

	/* If the strings are equal, return 0 */
	return (*s1 - *s2);
}
