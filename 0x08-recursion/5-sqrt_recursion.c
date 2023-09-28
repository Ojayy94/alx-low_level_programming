#include "main.h"

/**
 * upperroot - To find square root
 * @a: Value1
 * @b: value 2
 * Return: Square root
 */

int upperroot (int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (upperroot(a, b + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: value
 * Return: Square root
 */


int _sqrt_recursion(int n)
{
	return (upperroot(n, 1));
}
