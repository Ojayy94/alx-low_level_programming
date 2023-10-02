#include "main.h"

/**
 * _abs - Putchar absolute values
 *
 * @c: Number computation
 *
 * Return: Abs 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absVal;

		absVal = c * -1;
		return (absVal);
	}
	return (c);
}
