#include "lists.h"

/**
 * print_dlistint - Function to print elements in a list
 * @h: const pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++node;
		h = h->next;
	}

	return (node);
}
