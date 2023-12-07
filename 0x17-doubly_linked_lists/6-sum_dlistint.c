#include "lists.h"

/**
 * sum_dlistint - Program to suma a list
 * @head: Head node
 * Return: Return 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
