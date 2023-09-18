#include "main.h"

/**
 * _strlen - To return the length of string
 * @s: Use case
 * Return: Success
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}
