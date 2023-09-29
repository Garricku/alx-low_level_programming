#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _strlen - Counts length of a string.
 * @str: The string to be counted.
 * Return: Length.
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
 * print_all - Prints anything.
 * @*: Any charater.
 * @format: The format argument.
 * @...: Addtional arguments.
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	int i = 0, len = 0, flag = 0;
	va_list args;

	if (ptr == NULL)
		return;

	len = _strlen(ptr);
	va_start(args, format);
	while (i < len)
	{
		if (i > 0)
		{
			if (flag == 1)
			{
				printf(", ");
				flag = 0;
			}
		}
		if (ptr[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			flag = 1;
			i++;
			continue;
		}
		else if (ptr[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			flag = 1;
			i++;
			continue;
		}
		else if (ptr[i] == 's')
		{
			printf("%s", va_arg(args, char *));
			flag = 1;
			i++;
			continue;
		}
		else if (ptr[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			flag = 1;
			i++;
			continue;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
