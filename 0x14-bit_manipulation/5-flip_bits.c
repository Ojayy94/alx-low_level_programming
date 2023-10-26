#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * @m: value to flip
 * @n: number to flip
 * Return: Success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = a ^ b;
	unsigned int count = 0;

	while (flip > 0)
	{
		count += (flip & 1);
		flip >>= 1;
	}

	return (count);
}
