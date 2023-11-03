#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 *
 * Return: void/nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	for (i = 0; i < (int)ht->size; i++)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			printf("%d: ", i);
		}
		while (head != NULL)
		{
			printf("{'%s': '%s'}", head->key, head->value);
			if (head->next != NULL)
				printf(", ");

			head = head->next;
		}
		if (ht->array[i] != NULL)
			printf("\n");
	}
}
