#include "lists.h"

/**
 *
 */
size_t print_list(const list_t *h)
{
	int nodos;
	while (h->next != NULL)
	{
		printf("[%d] %s\n", a->len, a->str);
		h = h->next;
		nodos++;
	}
	return (nodos);
}
