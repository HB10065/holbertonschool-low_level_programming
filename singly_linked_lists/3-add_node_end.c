#include "lists.h"

/**
 * add_node - agrega un nodo al inicio de una single list
 * @head: siguiente nodo
 * @str: dato a guardar
 * Return: direccion al nuev nodo, si falla retorna NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *current;
	char *str_copy;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);

	while (str_copy[i] != '\0')
		i++;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	h->str = str_copy;
	h->len = i;
	h->next = NULL;

	if (*head == NULL)
		*head = h;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = h;
	}
	return (h);
}
