#include "main.h"
#include <stdio.h>

/**
 * print_array - algo
 * @a: array
 * @n: hasta donde imprimir
 */
void print_array(int *a, int n)
{
	int i = 0, j = 0;

	while (a[j] != 0)
		j++;
	while (i < n && n <= j)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
