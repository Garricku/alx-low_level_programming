#include "main.h"

/**
 * string_toupper - Changes lowercase letters to upppercase in  string.
 *
 * @str: The string to read for lowercase.
 *
 * Return: (Success)
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	if (*p >= 'a' && *p <= 'z')
	{
		*p = *p - 32;
	}

		p++;
	}

	return (str);
}
