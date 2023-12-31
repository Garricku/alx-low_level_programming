#include "function_pointers.h"

/**
 * int_index - Searches for an interger.
 * @array: Array to search.
 * @size: Size of the array.
 * @cmp: A pointer to compare function.
 * Return: Int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (size <= 0) || (cmp == NULL))
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
