#include "main.h"

/**
 * main - using putchar function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
