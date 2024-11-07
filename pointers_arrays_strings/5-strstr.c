#include "main.h"
#include <stddef.h>
/**
 * *_strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: memory loaction of byte if there is a substring, NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k = 0;

	while (needle[k] != '\0')
		k++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j] && j == 0)
		{
			j++;
		}
		else if (haystack[i] == needle[j] && haystack[i - 1] == needle[j - 1])
		{
			j++;
			if (j == k - 1)
			{
				return (&haystack[i - j + 1]);
			}
		}
		else
		{
			j = 0;
		}
	}
	return (NULL);
}
