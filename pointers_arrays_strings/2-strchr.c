#include "main.h"
#include <stddef.h>

/**
 * *_strchr - encuentra un caracter en un string
 * @s: String dado
 * @c: caracter a encontrar
 * Return: Null si no esta el caracter, si existe, un pointer hacia �l
 */
char *_strchr(char *s, char c)
{
	int size = 0, i;

	while (s[size] != '\0')
	{
		size++;
	}
	for (i = 0 ; i <= size; i++)
		{
			if (s[i] == c)
				break;
		}
	if (i > size)
		return (NULL);
	else
		return (&s[i]);
}
