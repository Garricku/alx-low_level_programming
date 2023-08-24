#include "lists.h"

/**
 * print_list - Prints the singly linked list.
 * @h: The list that should be printed.
 *
 * Return: The printed list's data.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{	
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		i++;
	}

	return (i);
}
