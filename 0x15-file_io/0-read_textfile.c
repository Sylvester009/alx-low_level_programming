#include "main.h"

/**
* read_textfile -  reads a text file and prints it to the POSIX std.o.
* @filename: filename.
* @letters: letters to be printed.
 *
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t f_read, written;
	char *buffer;

	if (filename == NULL)
  {
		return (0);
  }

	fd = open(filename, O_RDONLY);

	if (fd == -1)
  {
		return (0);
  }

	buffer = malloc(sizeof(char) * (letters));

	f_read = read(fd, buf, letters);
	written = write(STDOUT_FILENO, buf, nrd);

	free(buffer);
	close(fd);

	return (writtten);
}
