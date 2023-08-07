#include "main.h"
#include <stdlib.h>

/**
 * create_file - Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, bytes_write;
	int leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[leng] != '\0')
			leng++;
		text_content = "";
	}

	file_d = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	bytes_write = write(file_d, text_content, leng);

	if (file_d == -1 || bytes_write == -1)
		return (-1);

	close(file_d);

	return (1);
}
