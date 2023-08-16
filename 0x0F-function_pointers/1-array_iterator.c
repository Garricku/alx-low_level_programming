#include "function_pointers.h"

/**
 * array_iterator - Function, use on all elements of an array.
 * @array: Array for function to be applied to.
 * @size: Size of the array.
 * @action: Fuction pointer.
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((array == NULL) || (size == NULL))
	{
		return;
	}

	int i = 0;

	while (array[i] < size)
	{
		action(array[i]);
		i++;
	}
}
