#include "lists.h"

/**
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t current;
	size_t i = 1;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);

	current = h->next;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
