#include "main.h"

/**
 * puts2 - Prints every other charater of a string.
 *
 * @str: The string of which every other value will be printed.
 *
 * Return: (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}

	_puttchar('\n');
}
