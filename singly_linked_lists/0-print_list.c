#include "lists.h"

/**
 * print_list - prints the contents of list_t
 * @h: the list
 * Return: amount of Nodes of the linked list
 */
size_t print_list(const list_t *h)
{
	int nodos = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodos++;
	}
	return (nodos);
}
