#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argc string count
 * @av: argv string index
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int len;
	int i;
	int k;
	int j;

	len = 0;
	k = 0

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i])+1;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; I++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k++] = av[i][j];
		}

		p[k] = '\n';
	}
	p[k] = '\0';
	return (p);
}
