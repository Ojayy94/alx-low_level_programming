#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: String
 * @c: Character
 * Return: Null if not found
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; a >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
