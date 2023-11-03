#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table, or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table structure */
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to the linked lists */
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/* Initialize each pointer to NULL */
	for (i = 0; i < size; i++)
	ht->array[i] = NULL;
	/* Initialize the sorted linked list pointers to NULL */
	ht->shead = NULL;
	ht->stail = NULL;

	/* Set the size of the array */
	ht->size = size;
	return (ht);
}

/**
 * shash_table_set - Adds or updates an element in a sorted hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp, *prev, *next;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* Compute the index of the key in the array */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			/* Update the value of the existing node */
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	/* Create a new node with the given key and value */
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	/* Insert the node at the beginning of the linked list*/
	node->next = ht->array[index];
	ht->array[index] = node;

	/* Insert the node in the sorted linked list by key */
	prev = NULL;
	next = ht->shead;
	while (next != NULL && strcmp(next->key, key) < 0)
	{
		prev = next;
		next = next->snext;
	}
	node->sprev = prev;
	node->snext = next;
	if (prev != NULL)
		prev->snext = node;
	else
		ht->shead = node;
	if (next != NULL)
		next->sprev = node;
	else
		ht->stail = node;

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in a sorted hash table
 * @ht: The hash table to look into
 * @key: The key to look for
 * Return: The value associated with the key, or NULL if the key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* Compute the index of the key in the array */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the array index and look for the key */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL); /* The key was not found */
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int flag;
	
	if (ht == NULL)
		return;

	/* Traverse the sorted linked list and print the key/value pairs */
	tmp = ht->shead;
	flag = 0;
	printf("{");
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int flag;

	if (ht == NULL)
		return;

	/* Traverse the sorted linked list in reverse and print the key/value*/
	tmp = ht->stail;
	flag = 0;
	printf("{");
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *next;

	if (ht == NULL)
		return;

	/* Traverse the sorted linked list and free each node */
	tmp = ht->shead;
	while (tmp != NULL)
	{
		next = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = next;
	}
	/* Free the array of pointers and the hash table structure */
	free(ht->array);
	free(ht);
}
