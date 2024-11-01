#include "main.h"

/**
 * _strlen - cuenta el largo de un String
 * @s: pointer a un String
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s[i] != '\n')
		i++;
	return (i);
}
