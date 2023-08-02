#include "main.h"

/**
 * _pow_recursion - Calculates to the power of.
 * @x: First number.
 * @y: To the power of y.
 * Return: Sum. If y < 0, return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
