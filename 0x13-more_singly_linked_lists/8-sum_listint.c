#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: The pointer to the cfirst node.
 * Return: The sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
