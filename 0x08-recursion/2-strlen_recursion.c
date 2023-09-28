#include "main.h"

/**
 * _strlen_recursion - To return length of string
 * @s: String
 * Return: Recurssion
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
