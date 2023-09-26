#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sum two diagonals
 * @a: sums
 * @size: diagonal size
 * Return: Success
 */

void print_diagsums(int *a, int size)
{
	int add, add1 = 0, add2 = 0;

	for (add = 0; add < size; add++)
	{
		add1 += a[add];
		a += size;
	}

	a -= size;

	for (add = 0; add < size; add++)
	{
		add2 += a[add];
		a -= size;
	}
	printf("%d, %d\n", add1, add2);
}
