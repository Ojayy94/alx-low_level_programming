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
	size_t i = 0;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	for (left; right; right >= left;)
		printf('Searching in array: ');
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
