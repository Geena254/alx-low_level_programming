#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *fil);
void close_fil(int file_d);

/**
 * create_buff - Function that allocates 1024 bytes for a buffer.
 * @fil: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buff(char *fil)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fil);
		exit(99);
	}

	return (buffer);
}

/**
 * close_fil - Function that closes file descriptors.
 * @file_d: The file descriptor to be closed.
 */
void close_fil(int file_d)
{
	int a;

	a = close(file_d);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - Function that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description: exit code 97 if the argument count is incorrect
 * exit code 98 if file_from does not exist or cannot be read
 * exit code 99 if file_to cannot be created or written to
 * exit code 100 if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int fil_from, fil_to, byte_r, byte_w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	fil_from = open(argv[1], O_RDONLY);
	byte_r = read(fil_from, buffer, 1024);
	fil_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fil_from == -1 || byte_r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		byte_w = write(fil_to, buffer, byte_r);
		if (fil_to == -1 || byte_w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		byte_r = read(fil_from, buffer, 1024);
		fil_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (byte_r > 0);

	free(buffer);
	close_fil(fil_from);
	close_fil(fil_to);

	return (0);
}
