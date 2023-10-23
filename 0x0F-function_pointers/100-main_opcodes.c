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
	int i, bytes;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n"), exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");
		addr++;
	}

	printf("\n");
	return (0);
}
