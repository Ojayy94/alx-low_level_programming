#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to summ all function calls
 * @n: Integer values
 * Return: Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		int a = va_arg(args, int);

		sum += a;
	}
	va_end(args);
	return (sum);
}
