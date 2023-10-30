#include "main.h"

/**
 * append_text_to_file - To append
 * @filename: filename
 * @text_content: content
 * Return: -1, 0, 1 or 2
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, cat, len = 0;

	if (filename == 0)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != 0)
			len++;

		cat = write(fd, text_content, len);

		if (cat == -1)
			return (-1);
	}

	close(fp);
	return (1);
}
