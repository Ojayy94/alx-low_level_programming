#include "main.h"

/**
 * print_square - Print square
 * @size: use case
 * Return: Success
 */

void print_square(int size)
{
	int x, b;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
