#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of.
 * Return: The square root.
 */

int _sqrt_recursion(int n)
{
	int start = 1;
	int end = n;
	int mid;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid > n)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
