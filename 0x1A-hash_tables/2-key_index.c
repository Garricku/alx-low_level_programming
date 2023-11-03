#include "hash_tables.h"

/**
 * key_index - Returns the index of a key.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Pocess the hash value. */
	hash_value = hash_djb2(key);

	/* Find the values index and return it. */
	return (hash_value % size);
}
