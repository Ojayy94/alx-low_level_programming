#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: Node head
 * @index: index of node
 * Return: return NULL if false else 1 if true
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int step = 0;

	if (head)
	{
		while (temp != NULL)
		{
			if (step == index)
				return (temp);

			temp = temp->next;
			++step;
		}
	}

	return (NULL);
}
