#include "main.h"

/**
 * print_alphabet - putchar alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
