#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strcpy - Copies a string.
 * @src: The string to copy.
 * @dest: The copy destination.
 * Return: pointer to dest.
 */
char *_strcpy(const char *src, char *dest)
{
	int i = 0;

	if (src == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * print_numbers - Prints numbers followed by a newline.
 * @separator: String to be printed between numbers.
 * @n: Number of intergers passed to the function.
 * @...: Additional numbers/arguments.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *delim;

	if (separator != NULL)
	{
		delim = malloc(sizeof(char) * (1 + 1));
			if (delim == NULL)
				return;

		delim = _strcpy(separator, delim);
	}
	else
		delim = "";

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		printf("%d%s", va_arg(args, int), delim);
		i++;
	}
	printf("\n");
	va_end(args);
	free(delim);
}
