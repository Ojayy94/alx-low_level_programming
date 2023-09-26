#include "main.h"

/**
 * print_chessboard - To print a chessboard
 * @a: Row of the chessboard
 * Return: Chessboard
 */

void print_chessboard(char (*a)[8])
{
	int d;
	int b;

	for (d = 0; a[d][8]; d++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[d][b]);
		_putchar('\n');
	}
}
