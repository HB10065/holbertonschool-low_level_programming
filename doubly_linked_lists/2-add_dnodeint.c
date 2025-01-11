#include "lists.h"

/**
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	if (head != NULL)
		current->next = *head;
	else
	{
		current->next = NULL;
		*head = current;
	}
	current->prev = NULL;

	return (current);
}
