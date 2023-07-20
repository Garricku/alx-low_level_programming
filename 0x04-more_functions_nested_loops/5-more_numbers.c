#include "main.h"

/**
 * more_numbers - Prints 0 - 14 ten times in a new line.
 *
 * Return: (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}

			_putchar(j % 10 + '0');
		}

	_putchar('\n');
	}
}
