#include "main.h"

/**
 * factorial - Returns the factorial of a givin number.
 * @n: Interger to return the factorial of.
 * Return: The factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
