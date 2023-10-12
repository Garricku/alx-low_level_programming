#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list.
 * @h: The head node.
 * Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *list = h;

	if (!h)
		return (0);

	while (list != NULL)
	{
		list = list->next;
		len++;
	}
	return (len);
}
