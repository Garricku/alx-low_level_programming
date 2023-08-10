#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of intergers.
 * @min: Minimum value to be contain in the array.
 * @max: Maximum value to be contained in the array.
 * Return: Pointer to the created array. NUll if fail.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;
	int value;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	value = min;

	for (i = 0; i < size; i++)
	{
		array[i] = value;
		value++;
	}

	return (array);
}
