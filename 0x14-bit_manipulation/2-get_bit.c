#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value
 * @index: index number to add value
 * Return: Success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1ul << index)) == 0)
		return (0);

	return (1);
}
