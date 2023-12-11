#include "main.h"

/**
 * *_strcat - To append source to the destination
 * @dest: Destination
 * @src: Source to append
 * Return:  To append src and dest
 */

char *_strcat(char *dest, char *src)
{
	char srcln = 0;
	char destln = 0;

	int a;

	for (a = 0; dest[a] != '\0'; a++)
		destln++;

	for (a = 0; src[a] != '\0'; a++)
		srcln++;

	for (a = 0; a <= srcln; a++)
		dest[destln + a] = src[a];

	return (dest);
}
