#include "main.h"

/**
 * _print_rev_recursion - To print a reverse string
 * @s: String
 * Return: string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
