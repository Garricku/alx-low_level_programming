#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of a linked list.
 * @head: The first node currently.
 * @n: The new node to be inserted.
 * Return: A pointer to the new node. NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
