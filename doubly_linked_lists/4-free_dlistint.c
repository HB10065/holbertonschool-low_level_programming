#include "lists.h"

/**
 * free_dlistint - liber la memoria de una lista doble
 * @head: inicio de la lista
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *prev;

	if (head == NULL)
		return;

	current = head;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
	free(current);
}
