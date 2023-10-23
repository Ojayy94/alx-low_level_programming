#include "lists.h"

/**
 * print_listint - function that prints all elements of list
 * @h: const h
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (nodes = 0; nodes++;)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
