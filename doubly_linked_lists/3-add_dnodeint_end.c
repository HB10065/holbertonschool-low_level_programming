#include "lists.h"

/**
 * add_dnodeint_end - agrega un nodo al final de una lista doble
 * @head: inicio de la lista
 * @n: dato a guardar en el nodo
 * Return: direccion al nuevo nodo
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else if ((*head)->next == NULL)
	{
		new_node->prev = (*head);
		(*head)->next = new_node;
	}
	else
	{
		current = (*head)->next;
		while (current->next != NULL)
			current = current->next;

		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);

}
