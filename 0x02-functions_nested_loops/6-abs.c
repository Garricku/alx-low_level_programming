#include "main.h"
#include <unistd.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute for the absolute value
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

