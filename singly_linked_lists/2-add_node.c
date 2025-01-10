#include "lists.h"
#include <strings.h>

/**
 * add_node - agrega un nodo al inicio de una single list
 * @head: siguiente nodo
 * @str: dato a guardar
 * Return: direccion al nuev nodo, si falla retorna NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);
	h->str = str_copy;
	h->next = head;
	return (h);
}
