#include "lists.h"
#include <string.h>

/**
 * add_node - Program to add new node to a list
 * @head: node head for list_t
 * @str: String content of nodes
 * Return: New nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	int adds = 0;
	char *copy;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	copy = strdup(str);

	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (adds = 0; str[adds]; adds++)

	new->str = copy;
	new->len = adds;
	new->next = *head;

	*head = new;

	return (new);
}
