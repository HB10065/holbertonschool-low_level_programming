#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	else
	{
		ar = malloc(height * sizeof(int *));
		if (ar  == NULL)
		{
			free(ar);
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			ar[i] = malloc(width * sizeof(int *));
			if (ar[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(ar[i]);
				free(ar);
				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ar[i][j] = 0;
			}
		}
	}
	return (ar);
}
