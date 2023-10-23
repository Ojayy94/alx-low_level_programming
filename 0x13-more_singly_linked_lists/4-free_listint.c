#include "main.h"

/**
 * free_listint - Program that frees a list
 * @head: Head
 * return: free
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
	return (free);
}
