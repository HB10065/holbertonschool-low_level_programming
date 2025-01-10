#include "lists.h"

/**
 * print_dlistint - imprime el contendio de la lista
 * @h: primer nodo de la lista
 * Return: cantidad de nodos de la lista
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t i = 0;

	if (h == NULL)
		return (i);
	printf("%d\n", h->n);
	if (h->next == NULL)
		return (1);

	current = h->next;
	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	i += 2;
	printf("%d\n", current->n);
	return(i);
}
