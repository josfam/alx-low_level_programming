#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key
* @ht: The hash table to look into
* @key: The key being looked for
* Description: Retrieves a value associated with a key
* Return: The value associated with the element, or NULL if the key couldn't be
*         found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t **table;
	hash_node_t *current;

	table = ht->array;
	index = key_index((const unsigned char *)key, ht->size);
	current = table[index];

	if (current == NULL)
		return (NULL);

	/* Iterate over any nodes to find the key and value */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
