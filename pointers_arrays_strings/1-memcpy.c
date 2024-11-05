#include "main.h"

/**
 * *_memcpy - Copies part of a string and pastes it in another
 * @dest: pointer to string destination
 * @src: pointer to string to be copied
 * @n: amount of bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
