#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 * @dest: Destination
 * @src: Souce to copy
 * @n: Number
 * Return: Destination of copy (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
