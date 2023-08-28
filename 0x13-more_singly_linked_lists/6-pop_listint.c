#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: The first node (pointer).
 * Return: The head nodes data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
