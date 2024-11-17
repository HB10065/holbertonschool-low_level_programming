#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0, j = 0, x, y;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (s1 != NULL && s2 != NULL)
	{
		a = malloc(i + j - 2);
		for (x = 0; x < i; x++)
			a[x] = s1[x];

		for (y = 0; y < j; y++)
		{
			a[x] = s2[y];
			x++;
		}
		return (a);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		a = malloc(j - 1);
		for(x = 0; x < j; x++)
			a[x] = s2[x];
		return (a);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		a = malloc(i - 1);
		for (x = 0; x < i; x++)
			a[x] = s1[x];
		return (a);
	}
	else
		return (NULL);
}
