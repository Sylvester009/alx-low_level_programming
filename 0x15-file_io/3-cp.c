#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void cl_file(int fd);

/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @file: The name of the file storing chars
 *
 * Return: pointer to the newly-allocated buffer.
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * cl_file - Closes file descriptors.
 * @fd: The file descriptor
 */

void cl_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of args supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	int writ, from, r, t;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		writ = write(t, buff, r);
		if (t == -1 || writ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	cl_file(from);
	cl_file(t);

	return (0);
}

