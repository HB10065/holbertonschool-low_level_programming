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
		ar = malloc(height);
		if (ar  == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			ar[i] = malloc(width);
			if (malloc == NULL)
				return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ar[i][j] = 0;
			}
		}
		return (ar)
	}
}
