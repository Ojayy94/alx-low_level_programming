#include "main.h"

/**
 * _strncat - A function that concatenates two strings with n
 * @dest: destination
 * @src: source to append
 * @n: the char number to append in source
 * Return: Pointer to source for n
 */

char *_strncat(char *dest, char *src, int n)
{
	int srcln = strlen(dest);
	int a;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[srcln + a] = *src;
		src++;
	}
	dest[srcln + a] = '\0';
	return (dest);
}
