#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* dlistint_len - Returns the number of elements in a linked dlistint_t list.
* @h: Head of the linked list to print.
* Description: Returns the number of elements in a linked dlistint_t list.
* Return: The number of elements in a linked dlistint_t list.
*/
size_t dlistint_len (const dlistint_t *h)
{
	int count;
	const dlistint_t *current;

	current = h;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
