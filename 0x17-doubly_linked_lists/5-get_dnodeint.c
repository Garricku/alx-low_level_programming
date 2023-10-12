#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t linked list.
 * @head: The head node.
 * @index: The nth node to be returned.
 * Return: The indexed node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list_iterator = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (list_iterator == NULL && i != index)
			return (NULL);

		list_iterator = list_iterator->next;
	}
	return (list_iterator);
}
