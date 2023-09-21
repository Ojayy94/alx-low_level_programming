#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to capitalise
 * Return: Success
 */

char *cap_string(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == 0)
		{
			if (s[a] >= 'a' && s[a] <= 'z')
				s[a] = s[a] - 32;
			continue;
		}
	}
	if (s[a] == ' ')
	{
		a++;
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
	}
	return (0);
}
