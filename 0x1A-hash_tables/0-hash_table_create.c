#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: The pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	/*if the size argument is smaller than 1.*/
	if (size < 1)
		return (NULL);

	/*if the size argument is bigger than 0.*/
	new_hash_table = malloc(sizeof(hash_table_t) * size);

	/*if malloc fails.*/
	if (new_hash_table == NULL)
		return (NULL);

	/*if malloc does not fail.*/
	return (new_hash_table);
}
