#include "lists.h"

/**
 * add_nodeint_end - program to add node at the end
 * @head: Head of node
 * @n: node
 * Return: n
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *step;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (*head);
	}
	step = *head;
	while (step->next != NULL)
		step = step->next;
	
	step->next = add;

	return (*head);
}
