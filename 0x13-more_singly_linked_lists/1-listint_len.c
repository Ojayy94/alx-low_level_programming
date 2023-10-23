#include "lists.h"

/**
 * listint_len - function that prints all elements of list
 * @h: const h
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
