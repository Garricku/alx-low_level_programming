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

	if (h == NULL)
	{
		_putchar('[');
		_putchar('0');
		_putchar(']');
		_putchar(' ');
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		_putchar('\n');

		return (0);
	}

	while (h != NULL)
	{
		for (i = 0; h->str[i] != '\0'; i++)
		{
			_putchar(h->str[i]);
		}
		_putchar(h->len);
		_putchar('\n');

		h = h->next;
		i++;
	}

	return (i);
}
