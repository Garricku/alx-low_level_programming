#include "lists.h"

/**
 * get_nodeint_at_index - gets and returns the node at the index.
 * @head: First node.
 * @index: The node to return.
 * Return: The indexed node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}

	return (NULL);
}
