#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: First value to be swapped.
 * @b: Second value to be swapped.
 *
 * Return: (Success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
