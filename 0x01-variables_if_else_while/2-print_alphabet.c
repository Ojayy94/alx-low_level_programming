#include <stdio.h>

/**
 *main - using putchar
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
