#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function that adds positive numbers.
 * @argc: number of arguments counts
 * @argv: array with the arguments vector
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i, add = 0, result = 0;
	char c[] = "Error", *function_call;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			function_call = argv[i];
			while (*function_call != 0)
			{
				if (*function_call < 47 || *function_call > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				function_call++;
			}
			result = atoi(argv[i]);
			add = add + result;
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
	return (0);
}
