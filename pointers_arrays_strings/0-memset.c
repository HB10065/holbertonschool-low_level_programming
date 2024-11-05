#include "main.h"

/**
 * *_memset - replaces the value of n characters on a string *s
 * @s: given string
 * @b: character given
 * @n: number of bytes to be changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
