#include "main.h"

/**
 * _memset -  Fills memory with a constant byte.
 *
 * @s: Pointer to memory to be used.
 * @b: Constant byte to be used to fill the memory.
 * @n: Number of bytes to be filled by constant byte.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ch;

	for (ch = 0; ch < n; ch++)
	{
		s[ch] = b;
	}

	return (s);
}
