#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: tamaÃo del array
 * @c: primer caracter
 * Return: direccion de c
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	*a = malloc(size);
	a[0] = c
	return (a);
}

