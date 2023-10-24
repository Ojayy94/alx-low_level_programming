#include "lists.h"

/**
 * insert_nodeint_at_index - Insert at nth node
 * @head: Node head
 * @idx: Index to add node
 * @n: New node
 * Return: Insert node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *step;
	unsigned int count = 1;

	step = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = step;
		*head = node;
		return (node);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (step == NULL)
			return (NULL);
		else if (step->next == NULL)
			return (NULL);

		step = step->next;
	}
	node->next = step->next;
	step->next = node;

	return (node);
}
