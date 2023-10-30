#include "main.h"

/**
 * main - C program that copied file content from one to another
 * @argc: size of array argv and number of command line arguments
 * @argv: An  array  of size argc
 * Return: Always successful
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto;
	ssize_t checkr, checkw;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((checkr = read(fdfrom, buff, 1024)) > 0)
	{
		checkw = write(fdto, buff, checkr);
		if (checkw != checkr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (checkr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fdfrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom), exit(100);
	if (close(fdto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto), exit(100);

	return (0);
}
