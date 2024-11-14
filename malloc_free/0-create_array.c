#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: tama√o del array
 * @c: primer caracter
 * Return: direccion de c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;
	a = malloc(size * sizeof(c));
	while (i <= size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

