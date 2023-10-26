#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * @n: number to flip
 * @index: index of n
 * Return: Success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned int count = 0;

	flip = n ^ m;

	while (flip > 0)
	{
		count += (flip & 1);
		flip >>= 1;
	}

	return (count);
}
