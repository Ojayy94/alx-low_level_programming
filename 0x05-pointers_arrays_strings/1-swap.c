#include "main.h"

/**
 * swap_int - To swap the values of two integers
 * @a: Integer 1
 * @b: Integer 2
 * Return: Success
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
