#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look up.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Process index. */
	if (ht->size > 0)
		index = key_index((unsigned char *)key, ht->size);
	else
		return (NULL);

	/* Traverse the linked list. */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	/* Key was not found. */
	return (NULL);
}
