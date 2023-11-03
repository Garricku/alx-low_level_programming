#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to the hash table for the element to be added to.
 * @key: The key of the hash value of the new element.
 * @value: The hash value linked to the key of the new element.
 *
 * Return: 1 on success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_hash_element, *temp;

	/* Check if the hash table has been passed */
	if (ht == NULL)
		return (0);

	/* Check if the key is empty */
	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	/* Process index */
	if (ht->size > 0)
		index = key_index((unsigned char *)key, ht->size);
	else
		return (0);

	/* Create the new element */
	new_hash_element = malloc(sizeof(hash_node_t));
	/* if malloc fails. */
	if (new_hash_element == NULL)
		return (0);
	new_hash_element->key = strdup(key);
	new_hash_element->value = strdup(value);
	new_hash_element->next = NULL;

	/* Add node to beginning of list */
	temp = ht->array[index];
	ht->array[index] = new_hash_element;
	new_hash_element->next = temp;

	/* Success */
	return (1);
}
