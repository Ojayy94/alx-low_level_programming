#include "main.h"

/**
 * div - To identify prime numbers ina set values
 * @y: value1
 * @z: value2
 * Return: Divisible values
 */

int div(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	else 
		return (div(a, b + 1));
}

/**
 * is_prime_number - To check for prime number
 * @n: Value to return
 * Return: Success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (div(n, 2));
}
