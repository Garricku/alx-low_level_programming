#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: The current first node.
 * @str: The data to be inserted in the new node at the end.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode);
}
