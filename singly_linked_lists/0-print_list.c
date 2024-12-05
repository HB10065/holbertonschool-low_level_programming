#include "lists.h"

/**
 *
 */
size_t print_list(const list_t *h)
{
	int nodos = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodos++;
	}
	return (nodos);
}
