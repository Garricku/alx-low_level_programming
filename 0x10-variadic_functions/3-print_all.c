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
	va_list args;
	int flag = 0;
	const char *ptr = format;
	char *separator = "";

	va_start(args, format);
	while (ptr && *ptr)
	{
		if (flag == 1)
			separator = ", ";
		switch (*ptr)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			}
			default:
				ptr++;
				flag = 1;
				continue;
		}
		ptr++;
		flag = 1;
	}
	printf("\n");
	va_end(args);
}
