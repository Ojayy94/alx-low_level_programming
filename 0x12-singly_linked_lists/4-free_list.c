#include "lists.h"

/**
 * free_list - A program that frres a list
 * @head: Head pointer
 * Return: Freed afterc checking with valgrind
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->str);
	free(head);
	free_list(head->next);

}
