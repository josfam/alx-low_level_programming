#ifndef LISTS_HEADER
#define LISTS_HEADER

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* prints all the elements of a dlistint_t list. */
size_t print_dlistint(const dlistint_t *h);

#endif