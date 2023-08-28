#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: First node pointer of the list that needs to be freed.
 * Return: Void 0 (Success).
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
