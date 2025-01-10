#include "lists.h"

/**
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current->n = n;
	current->next = *head;
	current->prev = NULL;

	return (current);
}
