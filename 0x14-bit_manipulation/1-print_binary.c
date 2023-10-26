#include "main.h"

/**
 * print_binary - prins bit of given index
 * @n: number
 * Return: Success
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
