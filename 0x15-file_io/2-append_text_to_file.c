#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: -1 if the function fails or filename is NULL
 *         -1 if the file does not exist the user lacks write permissions.
 *         1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int byte_o, byte_w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	byte_o = open(filename, O_WRONLY | O_APPEND);
	if (byte_o == -1)
		return (-1);

	byte_w = write(byte_o, text_content, leng);
	if (byte_w == -1)
		return (-1);

	close(byte_o);

	return (1);
}
