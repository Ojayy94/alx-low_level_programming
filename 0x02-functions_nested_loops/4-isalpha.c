#include "main.h"

/**
 * _isalpha - check for alpha
 *
 * @c: character to be checked
 *
 * Return: 1 for success and otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c  <= 122))
	{
		return (1);
	}
	return (0);
}
