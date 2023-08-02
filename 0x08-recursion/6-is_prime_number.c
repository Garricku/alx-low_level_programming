#include "main.h"

/**
 * is_prime_number - Returns 1 if input = prime number, otherwise 0.
 * @n: Number to look if prime.
 * Return: 1 if prime else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	}
	return (is_prime_number(n, i + 1));
}
