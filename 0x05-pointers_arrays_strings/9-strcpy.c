#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: 1
 * @src: 2
 * Return: Success
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
