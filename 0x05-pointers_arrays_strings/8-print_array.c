#include "main.h"

/**
 * print_array - To print array
 * @a: int 1
 * @n: int 2
 * Return: Success
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(", %d", a[b]);
	}
	putchar('\n');
}
