#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add or update the key/value to
* @key: The key to use. Cannot be an empty string
* @value: The value associated with the key. Can be an empty string
* Description: Adds an element to the hash table
* Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int table_size;
	hash_node_t *new_node, *current;

	/* key must exist and cannot be an empty string.*/
	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	/* Hash table must exist */
	if (!ht)
		return (0);

	/* calculate the index to put the value */
	table_size = ht->size;
	index = key_index((const unsigned char *)key, table_size);

	/* create a hash node to store the key and value */
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup((char *)value);
	new_node->next = NULL;

	current = ht->array[index];

	/* if index is unoccupied, add the new_node at that index */
	if (!current)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = current;
		ht->array[index] = new_node;
	}
	return (1);
}
