#include "main.h"

/**
 * _memset - To fill a memory
 * @s: Area to be pointed
 * @b: Constant byte
 * @n: Integer
 * Return: Pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
