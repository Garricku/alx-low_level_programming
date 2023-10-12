#include "lists.h"

/**
 * free_dlistint - Frees a dlistint list.
 * @head: The head node.
 * Return: Void/nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head, *next;

	while (list != NULL)
	{
		next = list->next;
		free(list);
		list = next;
	}
}
