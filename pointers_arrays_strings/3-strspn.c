#include "main.h"

/**
 * _strspn - Counts how many bytes of accept are in s also
 * @s: String
 * @accept: subString
 * Return: k, amount of equal bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0, l;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l = 1;
				k++;
				break;
			}
		}
		if (l == 0)
		{
			break;
		}
	}
	return (k);
}
