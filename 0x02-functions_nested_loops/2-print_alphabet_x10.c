#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 1;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)

		_putchar(a);
		i++;
		_putchar('\n');
	}
}
