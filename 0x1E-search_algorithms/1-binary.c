#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, If value is not present in array
 * or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int right = size - 1, left = 0, mid, i;

	/* If array is pointing to NULL */
	if (array == NULL)
		return (-1);
	/* If size of the array is smaller than 1 */
	if (size < 1)
		return (-1);
	/* If the value is not given */
	if (!value)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i >= right)
				break;
			printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
