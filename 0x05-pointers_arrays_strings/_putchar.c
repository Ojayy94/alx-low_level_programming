#include <unistd.h>

/**
 * main - putchar compiler
 *
 * Return: Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
