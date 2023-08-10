#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: String number 1.
 * @s2: String number 2.
 * @n: Amount of bytes from s2 to be concatenated to s1.
 * if n is > or = to s2 use the entire string of s2. NULL = "".
 * Return: Pointer to concatenated string or NULL if fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *string;
	char *cat;
	char *catstring;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	for (i = 0; i < n; i++)
	{
		s2++;
		string = s2;
	}

	cat = strcat(s1, string);
	catstring = cat;

	if (catstring == NULL)
	{
		return (NULL);
	}
	else
	{
		return (catstring);
	}
}
