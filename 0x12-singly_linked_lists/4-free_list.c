#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: The head of the list to be freed.
 *
 * Return: 0 (Success).
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
