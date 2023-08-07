#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: String one.
 * @s2: String two.
 * Return: Pointer or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1;
	int len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}
