#include "main.h"

/**
 * times_table - print multiplication table
 *
 * Return: Success
 */

void times_table(void)
{
	int numb, mltp, product;

	for (numb = 0; numb < 10; numb++)
	{
		_putchar('0');

		for (mltp = 1; mltp < 10; mltp++)
		{
			_putchar(',');
			_putchar(' ');

			product = numb * mltp;

			if (product < 10)
				_putchar(' ');

			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

		}
		_putchar('\n');
	}
}
