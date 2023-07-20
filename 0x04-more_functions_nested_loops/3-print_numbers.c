#include "main.h"

/**
 * print_numbers - Prints numbers from 0 - 9.
 *
 * @n: Number to be printed.
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	for (n = '0'; n < '10'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
