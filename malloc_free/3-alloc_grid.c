#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * @width: width of input
 * @height: input
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int **di;
	int i, o;

	if (width <= 0 || height <= 0)
		return (NULL);

	di = malloc(sizeof(int *) * height);

	if (di == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		di[i] = malloc(sizeof(int) * width);

		if (di[i] == NULL)
		{
			for (; i >= 0; i--)
				free(di[i]);

			free(di);
			return (NULL);
		}
		if (di[i] != NULL)
			for (o = 0; o < width; o++)
				di[i][o] = 0;
	}

	return (di);
}
