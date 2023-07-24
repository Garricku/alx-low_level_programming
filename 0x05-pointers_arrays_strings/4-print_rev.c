#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: string to be printed in reverse.
 *
 * Return: (Success)
 */

void print_rev(char *s)
{
	int len = 0;

	while  (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		_putchar(*--s);
		len--;
	}

	_putchar('\n');
}
