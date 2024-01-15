#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: The head of the dlistint_t list.
* @n: The value to add to the node.
* Description: Adds a new node at the end of a dlistint_t list.
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end (dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	/* populate the new node */
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* handle the first node being added */
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	current = *head;

	/* move to the last node in the list, and add the new node after it */
	while(current->next != NULL)
	{
		current = current->next;
	}

	/* connect the head to the new node */
	current->next = new;
	new->prev = current;
	new->next = NULL;

	return (new);
}
