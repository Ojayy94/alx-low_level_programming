#include "lists.h"

/**
 * list_len - Function to calculate the length of a string
 * @h: len function for list_t
 * Return: Len count
 */

size_t list_len(const list_t *h)
{
	size_t len_func = 0;

	while (h != NULL)
	{
		h = h->next;
		len_func++;
	}
	return (len_func);
}
