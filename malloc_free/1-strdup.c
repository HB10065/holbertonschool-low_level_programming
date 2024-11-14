#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}

		a = malloc(i + 1);

		if (a == NULL)
		{
			return (NULL);
		}

		for (; j <= i; j++)
		{
			a[j] = str[j];
		}
		return (a);
	}

}
