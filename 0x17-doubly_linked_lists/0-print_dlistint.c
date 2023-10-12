#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head node.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t num_of_nodes = 0;

	if (!h)
		return (0);

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
