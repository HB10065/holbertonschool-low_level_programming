#include "lists.h"

/**
 *
 */
void free_list(list_t *head)
{
	list_t *current, *past;

	current = head;
	while (current->next != NULL)
	{
		past = current;
		current = current->next;
		free(past->str);
		free(past);
	}
	free(current->str);
	free(current);
}
