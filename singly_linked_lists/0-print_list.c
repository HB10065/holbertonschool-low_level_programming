#include "lists.h"

/**
 *
 */
size_t print_list(const list_t *h)
{
	int nodos = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodos++;
	}
	return (nodos);
}
