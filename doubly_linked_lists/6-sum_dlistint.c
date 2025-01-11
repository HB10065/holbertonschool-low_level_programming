#include "lists.h"

/**
 * sum_dlistint - suma los valores guardados de una lista
 * @head: primer nodo de la lista
 * Return: suma de los valores
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int i = 0;

	if (head == NULL)
		return (0);

	if (head->next == NULL)
		return (head->n);

	i = head->n;
	current = head->next;
	while (current->next != NULL)
	{
		i += current->n;
		current = current->next;
	}
	i += current->n;
	return (i);
}
