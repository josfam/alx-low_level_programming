#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: The hash table to print
* Description: Prints a hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	int i, size, last_node_index;
	hash_node_t **table;
	hash_node_t *current;

	if (ht == NULL) /* Print nothing */
	{
		;
	}
	else
	{
		last_node_index = last_node_location(ht);
		table = ht->array;
		size = ht->size;

		printf("{");
		for (i = 0; i < size; i++)
		{
			current = table[i];

			if (table[i] == NULL)
				continue;
			else if (!current->next) /* The only node in this location */
			{
				printf("'%s': '%s'", current->key, current->value);
				/* don't print a comma after the last node */
				if (i < last_node_index)
					printf(", ");
			}
			else /* There are linked nodes in this location */
			{
				print_kv_nodes(last_node_index, i, current);
			}
		}
		printf("}\n");
	}
}

/**
 * last_node_location - Returns the last index where a node was found in the
 *                      hash table
 * @ht: The hash table to examine
 * Description: Returns the last index where a node was found in the hash
 *              table
 * Return: the last index where a node was found in the hash table
 */
int last_node_location(const hash_table_t *ht)
{
	int i, table_size, last_index;
	hash_node_t **table;

	last_index = 0;
	table = ht->array;
	table_size = ht->size;

	for (i = 0; i < table_size; i++)
	{
		if (table[i] != NULL)
		{
			last_index = i;
		}
	}
	return (last_index);
}

/**
 * print_kv_nodes - Prints key-value pairs of connected nodes in a hash table
 * @last_index: The index that contains the last node in the hash table
 * @current_index: The current index being visited in the hash table
 * @current: The first node in the connection
 * Description: Prints key-value pairs of connected nodes in a hash table
 * Return: Nothing
 */
void print_kv_nodes(int last_index, int current_index, hash_node_t *current)
{
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current_index == last_index)
		{
			/* Don't print a comma after the last node in the link */
			if (current->next)
				printf(", ");
		}
		else
		{
			printf(", ");
		}
		current = current->next;
	}
}
