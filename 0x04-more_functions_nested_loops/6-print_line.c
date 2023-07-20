#include "main.h"

/**
 * print_line - Draws a stright line.
 *
 * @n: The number of times the character _ should be printed.
 *
 * If n is 0 or less, the function should only print \n
 *
 * Return: (Success)
 */

void print_line(int n)
{
	int n;
	char c;

	for ((c = '_') * n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		else
		{
		_putchar(c);
		_putchar('\n');
		}
	}
}
