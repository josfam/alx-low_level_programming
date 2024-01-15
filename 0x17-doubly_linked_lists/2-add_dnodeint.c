#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: The head of the dlistint_t list.
* @n: The value to add to the node.
* Description: Adds a new node at the beginning of a dlistint_t list.
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint (dlistint_t **head, const int n)
{
	dlistint_t *new;

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

	/* connect the head to the new node */
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (*head);
}
