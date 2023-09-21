#include "main.h"

/**
 * leet - To encode a string
 * @s: String to encode
 * Return: Success encoding s
 */

char *leet(char *s)
{
	int y;
	int z;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (y = 0; s[y] != '\0'; y++)
	{
		 for (z = 0; z < 10; z++)
		 {
			 if (s[y] == s1[z])
			 {
				 s[y] = s2[z];
			 }
		 }
	}
	return (s);
}
