#include "lists.h"

/**
 * pop_listint - Program to pop a linked list
 * @head: Node head
 * Return: Pop node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (head == NULL)
		return (0);

	node = *head;
	a = (*head)->n;
	*head = (*head)->next;
	free(node);

	return (a);
}
