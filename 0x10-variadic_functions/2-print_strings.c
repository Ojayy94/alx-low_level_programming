#include "variadic_functions.h"

/**
 * print_strings - Variadic function
 * @separator: Char pointer
 * @n: Integer
 * Return: Success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int a = 0;
	char *string;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("%s", "(null)");
		else
			printf("%s", string);

		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
