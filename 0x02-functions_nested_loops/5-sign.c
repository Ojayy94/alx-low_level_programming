#include "main.h"

/**
 * print_sign - print sign of number
 *
 * @n: number to be checked
 *
 * Return: 1 or 0 or -1 or - as required
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
