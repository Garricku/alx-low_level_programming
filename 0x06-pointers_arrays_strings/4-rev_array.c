#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Array to reverse.
 * @n: Number of elements in the array.
 *
 * Return: (Success)
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	/**
	 * Swap the first element with the last element,
	 * the second element with the second-to-last element,
	 * etc.
	 */

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
