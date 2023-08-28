#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list.
 * @head: The current first node.
 * @n: The new node to be added at the end.
 * Return: A pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *lastNode = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;

	return (newNode);
}
