#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Compare s1 and s2. success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
