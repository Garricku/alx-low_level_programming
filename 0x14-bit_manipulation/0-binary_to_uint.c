#include "main.h"

/**
 * binary_to_uint - Converts binary to an unsigned int.
 * @b: Binary to be converted to unsigned int.
 * Return: The integer value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	
	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != 0 || *b != 1)
		{
			return (0);
		}

		n <<= 1;

		if (*b =='1')
		n += 1;

		b++;
	}

	return (n);
}
