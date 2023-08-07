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
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
