#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: String to be capitalized.
 *
 * Return: (Success)
 */

char *cap_string(char *str)
{
	char *p = str;
	int cap_next = 1;

	while (*p != '\0')
	{

	if (cap_next && *p >= 'a' && *p <= 'z')
	{
		*p = *p - 32;
	}

	if
			(*p == ' '
			|| *p == '\t'
			|| *p == '\n'
			|| *p == ','
			|| *p == ';'
			|| *p == '.'
			|| *p == '!'
			|| *p == '?'
			|| *p == '"'
			|| *p == '('
			|| *p == ')'
			|| *p == '{'
			|| *p == '}')
	{
		cap_next = 1;
	}

	else
	{
		cap_next = 0;
	}

	p++;

	}

	return (str);
}
