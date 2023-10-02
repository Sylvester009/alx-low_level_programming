#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile- function read text file and print to STDOUT.
 * @filename: text file
 * @letters: number of letters to be read
 * Return:  actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filde;
	ssize_t written;
	ssize_t x;

	filde = open(filename, O_RDONLY);
	if (filde == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	x = read(filde, buffers, letters);
	write = write(STDOUT_FILENOs, buffer, x);

	free(buffer);
	close(filde);
	return (written);
}
