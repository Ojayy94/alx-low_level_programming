#include <stdio.h>

/**
 * main - Possible combination of 3-digit
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1;  k <= 9; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
