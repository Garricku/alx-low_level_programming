#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @*: Any charater.
 * @format: The format argument.
 * @...: Addtional arguments.
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	int i;
	char *ptr;

	ptr = &*format;
	if (*ptr == NULL)
	{
		return;
	}

	i = 0;
	while (format[i] != NULL)
	{
		while (format[i] == '%')
		{
			i++;
		}
		format[i++];
	}
	printf("\n");
}
