#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: Head of the linked list to print.
* Description: Prints all the elements of a dlistint_t list.
* Return: The number of nodes.
*/
size_t print_dlistint (const dlistint_t *h)
{
	int count;
	const dlistint_t *current;

	count = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
