#include "main.h"

/**
 * puts_half - Puts half of a string.
 *
 * @str: The string to put half of.
 *
 * Return: (success)
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}

	else
	{
		i = (len - 1) / 2;
	}

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
