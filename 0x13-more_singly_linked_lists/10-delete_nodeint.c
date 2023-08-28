#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: The first node.
 * @index: The index of the node to be deleted.
 * Return: An int for the deleted node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index && temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	prev->next = temp->next;
	free(temp);

	return (1);
}
