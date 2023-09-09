#include <stdio.h>

/**
 *main - using putchar
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int n = '0';
	char b = 'a';

	for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	return (0);

}
