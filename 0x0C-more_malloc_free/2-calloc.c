#include "main.h"

/**
 * _calloc - Main function
 * @nmemb: Memory to allocate
 * @size: Array size
 * Return: Value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < (size * nmemb); b++)
		a[b] = '\0';

	return (a);
}
