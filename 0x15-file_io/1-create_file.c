#include "main.h"

/**
 * create_file - To create file
 * @filename: Name of file
 * @text_content: Content of file
 * Return: -1, 0, 1 or 2
 */

int create_file(const char *filename, char *text_content)
{
	int fp, len, wr;

	len = 0;
	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fp == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
	{
		len++;
	}
	wr = write(fp, text_content, len);
	if (wr == -1)
		return (-1);

	close(fp);
	return (1);
}
