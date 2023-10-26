#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: value of bit
 * @index: index to set
 * Return: Success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1lu << index);

	return (1);
}
