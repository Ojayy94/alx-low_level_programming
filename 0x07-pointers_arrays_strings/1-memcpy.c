#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Memory area
 * @src: Memory source
 * @n: Integer bytes
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
		src[j] = dest[j];
	return (dest);
}
