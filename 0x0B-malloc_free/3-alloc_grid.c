#include "main.h"

/**
 * alloc_grid - Main function
 * @width: Width
 * @height: Height
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b, c, d;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			while (b >= 0)
			{
				free(a[b]);
				b--;
			}
		free(a);
		return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			a[c][d] = 0;
	}
	return (a);
}
