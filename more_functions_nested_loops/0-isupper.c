#include "main.h"

/**
 * _isupper - checks if a charater is an uppercase letter
 * @c: given character
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= Z)
		return (1);
	else
		return (0);
}
