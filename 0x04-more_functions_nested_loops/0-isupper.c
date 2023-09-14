#include "main.h"

/**
 * _isupper - Check for uppercase
 *
 * @c: for upper case
 *
 * Return: upper case is 1 otherwise 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
