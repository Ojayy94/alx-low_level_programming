#include "main.h"

#include <string.h>

/**
 * binary_to_uint - program to convert base to unsigned int
 * @b: Base number
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

	num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
