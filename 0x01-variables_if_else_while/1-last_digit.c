#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - running the last digit of n
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is 6 and is greater than 5\n", n);
	}

	else if (n==0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}

	else if ( (n < 6) !=0)
	{
		printf("Last digit of %d is 5 and is less than 6 and not 0\n", n);
	}
	return (0);
}
