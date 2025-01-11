#include "lists.h"

/**
 * add_dnodeint - agrega un nodo al inicio de una lista doble
 * @head: inicio de la lista
 * @n: dato a guardar
 * Return: direccion del nuevo nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
