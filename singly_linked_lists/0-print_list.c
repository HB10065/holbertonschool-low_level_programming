#include "lists.h"

/**
 *
 */
size_t print_list(const list_s *h)
{
	printf("[%d] %s", h -> len, h -> str);
}
