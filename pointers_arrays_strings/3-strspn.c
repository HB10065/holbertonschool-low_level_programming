#include "main.h"

/**
 * _strspn - Counts how many bytes of accept are in s also
 * @s: String
 * @accept: subString
 * Return: k, amount of equal bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
