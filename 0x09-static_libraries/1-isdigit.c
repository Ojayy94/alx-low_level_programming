#include "main.h"

/**
 * _isdigit - to check for digit
 *
 * @c: digits to be checked
 *
 * Return: Success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
