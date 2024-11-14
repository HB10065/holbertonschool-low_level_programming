#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - imita strdup
 * @str: string dado a copiar
 * Return: si str en NULL o el malloc falla devuelve NULL, sino devuelve a
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

		for (; j <= i + 1; j++)
		{
			a[j] = str[j];
		}
		return (a);
	}

}
