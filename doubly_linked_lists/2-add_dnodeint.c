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
	{
		current->next = *head;
		*head->prev = current;
	}
	else
		current->next = NULL;
	current->prev = NULL;

	*head = current;
	return (current);
}
