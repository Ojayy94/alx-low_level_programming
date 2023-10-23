#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: head of node
 * Return: free
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *step;

	if (head == NULL)
		return;

	step = *head;
	while (step != NULL)
	{
		node = step;
		step = step->next;
		free(node);
	}
	*head = NULL;
}
