#include "main.h"

/**
 * _realloc - function to reallocate using malloc
 * @ptr: function pointer
 * @old_size: old size
 * @new_size: New size
 * Return: All function call
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	char *ptr_copy, *step;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);

		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	new = malloc(sizeof(*ptr_copy) * new_size);

	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}

	step = new;

	for (a = 0; a < old_size && a < new_size; a++)
		step[a] = *ptr_copy++;

	free(ptr);
	return (new);
}
