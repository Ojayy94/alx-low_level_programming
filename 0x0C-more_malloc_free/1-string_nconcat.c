#include "main.h"

/**
 * string_nconcat - Main funtion
 * @s1: String 1
 * @s2: String 2
 * @n: Nth integer
 * Return: Value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int i;
	unsigned int j;
	unsigned int total;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	if (n >= b)
		b = n;
	total = a + b;

	result = malloc(sizeof(char) * (total + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		*(result + i) = *(s1 + i);

	for (i = 0, j = a; i < b; j++, i++)
		*(result + j) = *(s2 + i);

	*(result + j) = '\0';

	return (result);
}
