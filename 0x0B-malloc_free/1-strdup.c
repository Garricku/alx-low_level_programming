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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc(sizeof(char) * len + 1);

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
