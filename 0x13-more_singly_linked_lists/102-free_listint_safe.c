#include "lists.h"

/**
 * free_listint_safe - Frees the safe linked list.
 * @h: The head node of the list to free.
 * Return: Free nodes made NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *current = *h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp <= current)
		{
			break;
		}
	}

	*h = NULL;

	return (count);
}
