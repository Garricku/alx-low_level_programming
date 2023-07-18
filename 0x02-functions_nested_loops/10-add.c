#include <unistd.h>
#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int add(int a, int b)
{
	_putchar(a + '0');
	_putchar(b + '0');
	
	return (a + b);
}
