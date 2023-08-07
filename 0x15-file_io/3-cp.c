#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *make_buff(char *buf_file);
void file_close(int file_d);

/**
 * make_buff - Function that creates a buffer and
 * allocates 1024 bytes for it
 * @buf_file: the char storage
 * Return: a pointer to the buffer
 */

char *make_buff(char *buf_file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", buf_file);
		exit(99);
	}
	return (buff);
}

/**
 * file_close - Function that closes file descriptors
 * @file_d: File descriptor to close
 */
void file_close(int file_d)
{
	int e;

	e = close(file_d);

	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close file_d %d\n", file_d);
		exit(100);
	}
}

/**
 * main - Function that copies contents of a file to another file
 * @argc: number of arguments supplied
 * @argv: an array of pointers to arguments
 * Return: 0 on success
 *
 * Description: if the number of argument is incorrect, exit with code 97
 *		if file_from does not exist or cannot be read, exit with code 98
 *		if you can not create or can't write to file_to, exit with code 99
 *		if you can not close file_from or file_to, exit with code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int byte_w, byte_r;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = make_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	byte_r = read(file_from, buf, 1024);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR |
			S_IRGRP | S_IWGRP | S_IWUSR | S_IROTH);

	while (byte_r > 0)
	{
		if (file_from == -1 || byte_r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		byte_w = write(file_to, buf, byte_r);
		if (file_to == -1 || byte_w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		byte_r = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buf);
	file_close(file_from);
	file_close(file_to);

	return (0);
}
