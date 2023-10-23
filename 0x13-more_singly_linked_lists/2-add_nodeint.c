#include "lists.h"

/**
 * add_nodeint - program that add node at beginning
 * @head: head of node
 * @n: const n
 * Return: n
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;

	return (*head);
}
