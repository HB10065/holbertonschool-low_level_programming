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
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
		{
			if (s[i] == c)
				break;
		}
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
