#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a shah table.
 * @ht: The hahs table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	/* Loop through the array of the hash table*/
	for (int i = 0; i < (int)ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			hash_node_t *temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
