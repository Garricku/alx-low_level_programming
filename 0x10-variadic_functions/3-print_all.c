#include "variadic_functions.h"
#include <stdarg.h>

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
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ptr, char));
					break;
				case 'i':
					printf("%d", va_arg(ptr, int));
					break;
				case "f":
					printf("%f", va_arg(ptr, float));
					break;
				case "s":
					if (s == NULL)
					{
						printf("nill");
					}
					else
					{
					printf("%s", va_arg(ptr, char));
					break;
					}
				default:
					i--;
					break;
			}
			i++;
		}
		format[i++];
	}
	printf("\n");
}
