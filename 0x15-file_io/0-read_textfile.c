#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Function that reads text file and prints to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read and print
 * Return: the actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t byte_w;
	ssize_t byte_r;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	byte_r = read(file_d, buffer, letters);
	byte_w = write(STDOUT_FILENO, buffer, byte_r);

	free(buffer);
	close(file_d);
	return (byte_w);
}
