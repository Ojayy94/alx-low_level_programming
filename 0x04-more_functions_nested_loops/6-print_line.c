#include "main.h"

/**
 * print_line - Print line code
 *
 * @n: the use case
 * Return: Success
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
