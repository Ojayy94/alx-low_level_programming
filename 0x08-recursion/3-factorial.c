#include "main.h"

/**
 * factorial -  Factorial value of a number
 * @n: Factorial nth value
 * Return: Factorial value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
