#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: The first node.
 * Return: Reverse list forst pointer node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
