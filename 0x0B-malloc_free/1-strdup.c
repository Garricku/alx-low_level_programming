#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to duplicate.
 * Return: NULL if str = NULL. On success, a pointer to the string.
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * i + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	p[i] = '\0';

	return (p);
}
