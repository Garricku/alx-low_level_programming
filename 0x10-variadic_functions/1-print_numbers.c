#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a newline.
 * @separator: String to be printed between numbers.
 * @n: Number of intergers passed to the function.
 * @...: Additional numbers/arguments.
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char string;

	if (separator == NULL)
	{
		/*don't print separator*/
		separator = "";
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string += va_arg(args, int);

		if(i != n - 1)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		else
		{
			printf("%d\n", va_arg(args, int));
		}
	}
	va_end(args);
}
