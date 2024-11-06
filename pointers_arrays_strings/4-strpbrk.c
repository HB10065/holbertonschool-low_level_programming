#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - checks if a String has the characters of another
 * @s: String to analize
 * @accept: String with accepted characters
 * Return: memory direction of a byte of s or NULL if there is no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
