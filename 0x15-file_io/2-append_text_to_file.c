#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: The name of file to be read
 * @text_content: the NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int leng, byte_write;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for(leng = 0; text_content[leng];)
			leng++;
	}

	file_d = open("filename", O_WRONLY | O_APPEND);
	if(file_d == -1)
		return (-1);

	byte_write = write(file_d, text_content, leng);
	if(byte_write == -1)
		return (-1);

	close(file_d);

	return (1);
}
