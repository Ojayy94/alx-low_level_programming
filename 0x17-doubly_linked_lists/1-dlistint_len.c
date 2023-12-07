#include "lists.h"

/**
 * dlistint_len - program that returns linked list elements
 * @h: const h
 * Return: list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lists = 0;

	while (h)
	{
		lists++;
		h = h->next;
	}

	return (lists);
}
