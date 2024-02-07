#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @arr: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located. If value is not present in
 * array or if array is NULL, your function must return -1
 */
int jump_search(int arr[], size_t size, int value)
{
	int step = sqrt(size), prev = 0, sizze = size;

	if (arr == NULL || size == 0)
		return -1;

	while (arr[step - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= sizze)
			return (-1);
	}
	while (arr[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, arr[prev]);
		prev++;
		if (prev == fmin(step, size))
			return (-1);
	}
	if (arr[prev] == value)
		return (prev);
	return (-1);
}
