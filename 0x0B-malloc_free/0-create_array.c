#include "main.h"

/**
 * create_array - To create the function
 * @size: Size of integer
 * @c: Size of char
 * Return: Value or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}
