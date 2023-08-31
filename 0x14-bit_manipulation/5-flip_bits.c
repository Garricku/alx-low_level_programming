#include "main.h"

/**
 * flip_bits - Ret num of bits needed to flip one num to another.
 * @n: Bit to be flipped.
 * @m: Other bit to be filpped to.
 * Return: Number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
