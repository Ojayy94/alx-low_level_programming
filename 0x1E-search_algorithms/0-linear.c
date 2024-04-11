#include "search_algos.h"

/**
 * linear_search - earches for a value in an array of integers
 * @array: pointer to the first element
 * @size: pointer to the first element
 * @value: value to search for
 * Return: Null, -1 or the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
