#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: String one.
 * @s2: String two.
 * Return: Pointer or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j;
	int len;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; s2[j] != '\0'; j++)
	{
		len = s1[i] + s2[j];
	}

	p = malloc(sizeof(char) * len + 1);
	p = s1 + s2;
	return (p);
}
