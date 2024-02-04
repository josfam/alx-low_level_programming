#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: The head of the dlistint_t list.
* Description: frees a dlistint_t list.
* Return: Nothing.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *prev;

	current = head;
	prev = head;
	while (current->next != NULL)
	{
		current = current->next;
		free(prev);
		prev = current;
	}
	free(current);
}
