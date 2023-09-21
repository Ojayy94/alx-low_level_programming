#include "main.h"

/**
 * leet - To encode a string
 * @s: String to encode
 * Return: Success encoding s
 */

char *leet(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == 'a')
			s[a] = '4';
		if (s[a] == 'A')
			s[a] = '4';
		if (s[a] == 'e')
			s[a] = '3';
		if (s[a] == 'E')
			s[a] = '3';
		if (s[a] == 'o')
			s[a] = '0';
		if (s[a] == 'O')
			s[a] = '0';
		if (s[a] == 't')
			s[a] = '7';
		if (s[a] == 'T')
			s[a] = '7';
		if (s[a] == 'l')
			s[a] = '1';
		if (s[a] == 'L')
			s[a] = '1';
	}
	return (s);
}
