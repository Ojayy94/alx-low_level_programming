#include "main.h"

/**
* print_rev - to print a string and a new line
* @s: Use case
* Return: Success
*/

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (a = a - 1; s[a] != '\0'; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
