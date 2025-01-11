#include "lists.h"

/**
 * insert_dnodeint_at_index - inserta un nuevo nodo en una lista
 * @h: primer nodo de la lista
 * @idx: lugar de la lista en el que insertarlo
 * @n: valor que guarda
 * Return: direccion del nuevo nodo, NULL en caso de error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (*h == NULL && idx != 0)
		return (NULL);
	else if (idx == 0)
		new_node = add_dnodeint(h, n);
	else if ((*h)->next == NULL && idx == 1)
		new_node = add_dnodeint_end(h, n);
	else if ((*h)->next == NULL)
		return (NULL);
	else
	{
		current = (*h)->next;
		while (current != NULL && i < idx)
		{
			i++;
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
		else
		{
			new_node = malloc(sizeof(dlistint_t));
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			if (current->next != NULL)
				current->next->prev = new_node;
			free(current);
		}
	}
	return (new_node);
}
