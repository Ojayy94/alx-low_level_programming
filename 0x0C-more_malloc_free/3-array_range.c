#include "main.h"

/**
 * array_range - Main function
 * @min: Minimum values
 * @max: Maximum values
 * Return: Value
 */

int *array_range(int min, int max)
{
	int x, y;
	int *z;

	if (min > max)
		return (NULL);

	x = max - min + 1;

	z = malloc(sizeof(int) * x);
	if(z == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		z[y] = min++;

	return (z);
}
