#include "main.h"

/**
 * clear_bit - Clears bit by setting it to 0.
 * @n: The bit.
 * @index: The index of the bit.
 * Return: Cleared bit.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
