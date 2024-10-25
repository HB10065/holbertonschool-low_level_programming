#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints from the given numer to 98
 * @n: given number
 */
void print_to_98(int n)
{

	for (n = n; n != 98 ; n--)
	{
		printf("%d, ", n);
		if (n < 98)
			n = n + 2;
	}
	printf("%d\n", n);
}
