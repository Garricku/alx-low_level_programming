#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at the given index.
 * @h: Head node.
 * @idx: The index of the node to be inserted with a value.
 * @n: The value to be inserted.
 * Return: Ponter to the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *indexed_node;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	indexed_node = *h;
	while (indexed_node != NULL && idx > 1)
	{
		indexed_node = indexed_node->next;
		idx--;
	}
	if (indexed_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = indexed_node->next;
	new_node->prev = indexed_node;
	if (indexed_node->next != NULL)
		indexed_node->next->prev = new_node;

	indexed_node->next = new_node;
	return (new_node);
}
