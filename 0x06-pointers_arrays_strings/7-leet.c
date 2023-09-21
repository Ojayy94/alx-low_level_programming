#include "main.h"

/**
 * leet - To encode a string
 * @s: String to encode
 * Return: Success encoding
 */

char *leet(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == 'a' || s[a] == 'A')
			s[a] = '4';
		if (s[a] == 'e' || s[a] == 'E')
			s[a] = '3';
		if (s[a] == 'o' || s[a] == 'O')
			s[a] = '0';
		if (s[a] == 't' || s[a] == 'T')
			s[a] = '7';
		if (s[a] == 'l' || s[a] == 'L')
			s[a] = '1';
	}
	return (s);
}
