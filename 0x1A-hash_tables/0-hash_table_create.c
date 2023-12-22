#include "hash_tables.h"

/**
  * hash_table_create - Function that creates a hash table
  * @size: Size of the array
  * Return: A pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = NULL;
	hash_node_t **a = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	a = malloc(sizeof(hash_node_t *) * size);
	if (a == NULL)
		return (NULL);

	for (; i < size; ++i)
		a[i] = NULL;

	ht->size = size;
	ht->array = a;

	return (ht);
}
