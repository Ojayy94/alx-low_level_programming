#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key
  * @ht: hash table
  * @key: key
  * Return: The value associated with the element or NULL
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *mode = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	mode = ht->array[index];

	if (mode == NULL)
		return (NULL);

	while (strcmp(key, mode->key) != 0)
		mode = mode->next;

	return (mode->value);
}
