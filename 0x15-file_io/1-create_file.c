#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of file to create.
 * @text_content: terminated string to write to the file.
 *
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writ, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(fd, text_content, i);

	if (fd == -1 || writ == -1)
		return (-1);

	close(fd);

	return (1);
}

