#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: The head node.
 * Return: The sum of n.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *value = head;

	while (value != NULL)
	{
		sum += value->n;
		value = value->next;
	}
	return (sum);
}
