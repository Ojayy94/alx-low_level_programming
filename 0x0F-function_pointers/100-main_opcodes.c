#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the opcodes of itself.
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int a, i;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n"), exit(2);
	}

	for (i = 0; i < a; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (i == a - 1)
			continue;
		printf(" ");
		a++;
	}

	printf("\n");
	return (0);
}
