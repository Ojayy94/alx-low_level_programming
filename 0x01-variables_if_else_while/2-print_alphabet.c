#include <stdio.h>

/**
 *main - using putchar
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	for (c = 'a' && c <= 'z'; c++;)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
