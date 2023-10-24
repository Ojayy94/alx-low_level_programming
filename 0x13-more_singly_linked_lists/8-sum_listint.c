#include "lists.h"

/**
 * sum_listint - Program that adds node
 * @head: Node head to sum
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
