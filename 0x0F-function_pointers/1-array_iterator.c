#include "function_pointers.h"

/**
 * array_iterator - Function pointer
 * @array: array of function
 * @size: size type
 * @action: function pointer to call a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
