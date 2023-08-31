#include "main.h"

/**
 * print_binary - Prints a number in binary.
 * @n: The number to be printed.
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int i;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & (mask << (sizeof(unsigned long int) * 8 - 1 - i))) != 0)
		{
			break;
		}
	}

	if (i == sizeof(unsigned long int) * 8)
	{
		_putchar('0');
		return;
	}

	for (; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & (mask << (sizeof(unsigned long int) * 8 - 1 - i))) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
