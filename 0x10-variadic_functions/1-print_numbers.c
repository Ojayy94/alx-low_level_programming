#include "variadic_functions.h"

/**
 * print_numbers - variadic function to print numbers
 * @separator: Char const pointer
 * @n: integer
 * Return: Success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
