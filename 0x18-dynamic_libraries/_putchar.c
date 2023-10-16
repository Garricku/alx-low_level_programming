#include "main.h"

/**
 * _putchar - Prints a char to stdout.
 * @c: The char to print.
 * Return: Int value 1 on success. -1 on failure.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
