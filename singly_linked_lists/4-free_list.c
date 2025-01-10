#include "lists.h"

/**
 * free_list - usa free en una lista
 * @head: primer nodo de la lista
 */
void free_list(list_t *head)
{
	list_t *current, *past;


	if (head == NULL)
		return;
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
