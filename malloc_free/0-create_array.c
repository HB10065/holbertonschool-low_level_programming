#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: tama�o del array
 * @c: primer caracter
 * Return: direccion de c
 */
char *create_array(unsigned int size, char c)
{
	int *a;
	*a = malloc(size);
	a[0] = c
	return (a);
}

