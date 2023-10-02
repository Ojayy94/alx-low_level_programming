#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: 1
 * @src: 2
 * Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
