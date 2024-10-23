#include "main.h"
/**
 * _isalpha - checks if c value is alphabetical in ascii or not
 * @c: ascii character
 * Return: 1 if c is alphabetical, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
