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
	char *words;
	char *token;
	char *delim = "\t\n";
	char **array;
	int len;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	words = str;
	count = 0;
	token = strtok(words, delim);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delim);
	}
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	token = strtok(words, delim);
	i = 0;
	while (token != NULL)
	{
		len = strlen(token);
		array[i] = malloc(sizeof(char) * (len + 1));
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
	strcpy(array[i], token);
	token = strtok(NULL, delim);
	i++;
	}
	array[i] = NULL;
	return (array);
}
