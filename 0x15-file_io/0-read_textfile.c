#include "main.h"

/**
 * read_textfile - File i/o to read textfile
 * @filename: file to read from
 * @letters: letters in file name to read from
 * Return: 0 or 1 or 2
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *fp;

	if (filename == NULL)
		return (0);

	fp = malloc(sizeof(char) * letters);

	if (fp == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, fp, letters);
	wr = write(STDOUT_FILENO, fp, re);

	if (op == -1 || re == -1 || wr == -1 || re != wr)
	{
		free(fp);
		return (0);
	}
	free (fp);

	close(op);
	return (wr);
}
