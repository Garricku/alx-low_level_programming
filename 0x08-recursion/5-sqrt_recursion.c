#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of.
 * Return: The square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i;

		for (i = 1; i <= n / 2; i++)
		{
			if (i == 1 && i <= n / 2;)
			{
				i++;
				return (i);
			}
			else if (i * i > n)
			{
				return (_sqrt_recursion(n - (i - 1) * (i - 1)));
			}
		}
		return (-1);
	}
}
