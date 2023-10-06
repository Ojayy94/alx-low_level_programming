#include "main.h"

/**
 * malloc_checked - Main function
 * @b: Memory to allocate for
 * Return: Mallloc pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
