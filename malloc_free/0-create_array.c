#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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

	if (size != 0)
	{
		a = malloc(size * sizeof(c));
		if (a == NULL)
		{
			return (NULL);
		}
		while (i <= size)
		{
			a[i] = c;
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (a);
}

