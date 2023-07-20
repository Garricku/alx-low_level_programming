#include "main.h"

/**
 * _isupper - Cheeks for uppercase charater.
 *
 * @c: The charater to check for uppercase.
 *
 * Return: 1 if c is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))

	{
		return (1);
	}

	else
	{
		return (0);
	}
}
