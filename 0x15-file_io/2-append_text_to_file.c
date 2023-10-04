#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, writ, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	writ = write(op, text_content, i);

	if (op == -1 || writ == -1)
		return (-1);

	close(op);

	return (1);
}
