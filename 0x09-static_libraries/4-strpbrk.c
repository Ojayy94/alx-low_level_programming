#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: String
 * @accept: Bytes of string
 * Return: Accept s
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
