#include "search_algos.h"

/**
 * binary_search - earches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: The value to search for
 * Return: Null, -1 or print the array being searched every time it changes
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left;
	size_t center;
	size_t right;

	if (!array)
		return (-1);

	while (left < right)
	{
		center = (right + left) / 2;
		i = left;

		printf("Searching in array: ");

		for (; i <= right; ++i)
		{
			if (i != left)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf('\n');

		if (array[center] < value)
			left = center + 1;
		else if (array[center] > value)
			right = center - 1;
		else
			return (centre);
	}

	return (-1);
}
