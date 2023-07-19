#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int n = 10;
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (product < 10)
			{
                		_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	 _putchar('\n');
}
