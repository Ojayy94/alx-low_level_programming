#include "main.h"

/**
 * _puts_recursion - To print a string
 * @s: Print string 
 * Return: String
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
