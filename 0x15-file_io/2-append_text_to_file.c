#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: The name of file to be read
 * @text_content: the NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wri;
	int leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);

	wri = write(op, text_content, leng);

	if (op == -1 || wri == -1)
		return (-1);

	close(op);

	return (1);
}
