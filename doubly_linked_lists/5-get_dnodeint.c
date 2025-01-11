#include "lists.h"

/**
 * get_dnodeint_at_index - encuentra un nodo y retorna su ubicacion
 * @head: primer nodo de la lista
 * @index: posicion en la lista del nodo a encontrar
 * Return: Ubicacion del nodo, retorna NULL si el nodo no existe
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	if (head->next == NULL)
		return (NULL);

	current = head->next;
	while (current->next != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i != index)
		return (NULL);
	else
		return (current);

}
