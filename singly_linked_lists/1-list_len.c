#include "lists.h"

/**
 * list_len - cuenta la cantidad de nodos de una lista
 * @h: primer nodo
 * Return: cantidad de nodos en la lista
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
