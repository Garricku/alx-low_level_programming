#include "lists.h"

/**
 * listint_len - Returns the number elements in a linked list.
 * @h: The first node in the linked list (pointer).
 * Return: The number of elements (noe) in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t noe = 0;

	while (h != NULL)
	{
		h = h->next;
		noe++;
	}
	return (noe);
}
