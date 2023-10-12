#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the index of a dlistint_t list.
 * @head: The head node.
 * @index: The index of the node to be deleted.
 * Return: 1 on succes -1 in case of failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *indexed_node = *head;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = indexed_node->next;
		if (indexed_node->next != NULL)
			indexed_node->next->prev = NULL;
		free(indexed_node);
		return (1);
	}
	while (indexed_node != NULL && index > 0)
	{
		indexed_node = indexed_node->next;
		index--;
	}
	if (indexed_node == NULL)
		return (-1);

	indexed_node->prev->next = indexed_node->next;

	if (indexed_node->next != NULL)
		indexed_node->next->prev = indexed_node->prev;

	free(indexed_node);
	return (1);
}
