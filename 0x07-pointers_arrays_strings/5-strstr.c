#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: Substring needle
 * @needle: String
 * Return: pointer to the beginning of substring or NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y = 0;

	while (needle[y] != '\0')
		y++;

	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[x] != needle[x])
				break;
		}
		if (x != y)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
