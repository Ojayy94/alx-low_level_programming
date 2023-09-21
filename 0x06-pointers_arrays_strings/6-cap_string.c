#include "main.h"

/**
 * cap_string - function that capitalizes
 * @s: string to capitalise
 * Return: Success
 */

char *cap_string(char *s)
{
	int a, c;
	char b[] = "' ',;.!?(){}\n\t\" ";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; b[c] != '\0'; c++)
		{
		if (a == 0)
		{
			if (s[a] >= 'a' && s[a] <= 'z')
			{
			s[a] = s[a] - 32;
			continue;
			}
		}
		if (s[a] == b[c])
		{
			a++;
			if (s[a] >= 'a' && s[a] <= 'z')
			{
				s[a] = s[a] - 32;
			}
		}
		}
	}
	return (s);
}
