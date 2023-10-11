#include "function_pointers.h"

/**
 * int_index - Function
 * @array: function array
 * @size: function size
 * @cmp: Function to compare
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	if (array && cmp && size != 0)
		for (a = 0; a < size; a++)
			if (cmp(array[a]) != 0)
				return (a);

	return (-1);
}
