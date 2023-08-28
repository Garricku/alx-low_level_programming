#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at the indexed point.
 * @head: The first node.
 * @idx: The indexed location for thge new node.
 * @n: The new nodes data.
 * Return: The new nodes pointer(s).
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}


