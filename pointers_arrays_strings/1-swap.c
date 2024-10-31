#include "main.h"

/**
 * swap_int - swpas values of variables
 * @a: v
 * @b: a
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
