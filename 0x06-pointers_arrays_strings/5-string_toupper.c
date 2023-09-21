#include "main.h"

/**
 * string_toupper - Change a string character
 * @s: String to be changed using ASCII code
 * Return: Success
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}
