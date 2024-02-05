#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i, list_size = size;

	/* case: array NULL pointer */
	if (array == NULL)
		return (-1);
	/* case: size of the array is 0 */
	if (size < 1)
		return (-1);
	/* case: there is no value given to search for */
	if (!value)
		return (-1);
	for (i = 0; i < list_size; i++)
	{
		/* display a checkpoint output */
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
