#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: String to be split into words.
 * Return: Pointer to an array of strings.
 * Returns NULL if str == NULL or str == "". Fail returns NULL.
 */

char **strtow(char *str)
{
	int i;
	int count;
	int len;
	char string;
	char s[];
	int count2;

	if (str == NULL || (strcmp(str, "") == 0)
	{
		return (NULL);
	}

	count = 0;
	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] = ' ' || '\t')
		{
			string[count] = i;
			count += 1;
		}
	}
	while (count2 <= count)
	{
	len = s1 + 1;
	count2 = (count - count) + 1;
	string[count] = malloc(sizeof(char *) * len);
	string[count] = s[0];
	count++;
	s++
	}
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	return (string);
}
