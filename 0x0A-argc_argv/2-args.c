#include <stdio.h>

/**
 * main - main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
