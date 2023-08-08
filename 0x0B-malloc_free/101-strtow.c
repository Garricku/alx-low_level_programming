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
	int len;
	char *words;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; i != '\0'; i++)
	{
		if (words[i] == ' ' || i == '\t')
		{
			words[i] = '\n';
		}
	}
	len = i + 1;
	if (words == NULL)
	{
		free(words); 
		return (NULL);
	}
	words = malloc(sizeof(char) * len);
	return (words);
}
