#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed, 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d;
	ssize_t bytes_write;
	char *buf;
	ssize_t bytes_read;

	file_d = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);

	bytes_read = read(file_d, buf, letters);
	bytes_write = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(file_d);
	return (bytes_write);
}
