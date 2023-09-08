#include <stdio.h>

/**
 * main - alphabets upper and lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char c = 'A';

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
