#include "lists.h"

/**
 * get_nodeint_at_index - Function to get index node
 * @head: Node head
 * @index: node index to return
 * Return: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head != NULL)
			head = head->next;
	}
	return (head);
}
