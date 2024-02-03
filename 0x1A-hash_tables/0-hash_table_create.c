#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: The size of the array
* Description: Creates a hash table.
* Return: A pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;
	hash_node_t **node_array;

	/* allocate space an array of pointers to hash_node_t elements */
	node_array = malloc(size * sizeof(hash_node_t *));
	if (!node_array)
		return (NULL);

	/* fill node_array with NULLS */
	for (i = 0; i < size; i++)
	{
		node_array[i] = NULL;
	}

	/* allocate space for a hash table */
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = node_array;

	return (new_table);
}
