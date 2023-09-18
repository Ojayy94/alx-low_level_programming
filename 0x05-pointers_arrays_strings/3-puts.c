#include "main.h"

/**
 * _puts - to print a string and a new line
 * @str: Use case
 * Return: Success
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
