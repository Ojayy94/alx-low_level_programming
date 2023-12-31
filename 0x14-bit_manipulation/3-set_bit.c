#include "main.h"

/**
 * set_bit - unction that sets the value of a bit to 1 at a given index
 * @n: pointer value
 * @index: index to set
 * Return: Success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1lu << index);

	return (1);
}

