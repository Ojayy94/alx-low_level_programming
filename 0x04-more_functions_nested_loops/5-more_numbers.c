#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return: Success
 */

void more_numbers(void)
{
	int y;
	int b;

	for (y = 0; y < 10; y++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
