#include "main.h"
#include <stdlib.h>

/**
 * create_file - Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, bytes_wr;
	int leng;

	if (filename == NULL)
		return (-1);

	file = open("filename", O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;

		bytes_wr = write(file, text_content, leng);
		if (bytes_wr != leng)
		return (-1);
	}

	close(file);

	return (1);
}
