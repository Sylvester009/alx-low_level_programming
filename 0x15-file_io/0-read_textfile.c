#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and print to POSIX STDOUT.
 * @filename: text file
 * @letters: number of letters to be read
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t writ;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	x = read(fd, buff, letters);
	writ = write(STDOUT_FILENO, buff, x);

	free(buff);
	close(fd);
	return (writ);
}
