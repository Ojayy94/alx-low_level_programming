#include "lists.h"

/**
 * free_dlistint - To free list
 * @head: Head of node
 * Return: Freed list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
