#include "lists.h"

/**
 *
 */
size_t print_list(const list_t *h)
{
	int nodos;
	const list_t a = *h;
	while (a->next != NULL)
	{
		printf("[%d] %s\n", a->len, a->str);
		a = a->*next;
		nodos++;
	}
	return (nodos);
}
