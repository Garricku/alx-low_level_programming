#include "lists.h"

/**
 * add_node - Adds a new node at the begining of the singly list.
 * @head: The current first node.
 * @str: The data to be inserted in the new node at the begining.
 * Return: The updated list, with the added node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
