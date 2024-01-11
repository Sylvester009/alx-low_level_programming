#include "main.h"
#include <stdio.h>

/**
 * copyFile - copies the content of a file to another file.
 * @file_from: file from.
 * @file_to: file to.
 * @argv: arguments vector.
 * Return: void.
 */
void copyFile(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t read_chars, written;
char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	copyFile(file_from, file_to, argv);

	read_chars = 1024;
	while (read_chars == 1024)
	{
		read_chars = read(file_from, buff, 1024);
		if (read_chars == -1)
			copyFile(-1, 0, argv);
		written = write(file_to, buff, read_chars);
		if (written == -1)
			copyFile(0, -1, argv);
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
