#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

void error_file(int file_from, int file_to, char *argv[]) {
    if (file_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (file_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
}

void copyFile(const char *origin, const char *dest) {
    int fd_from, fd_to, err_close;
    ssize_t read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];

    fd_from = open(origin, O_RDONLY);
    fd_to = open(dest, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

    error_file(fd_from, fd_to, (char *[]){"", origin, dest});

    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes != read_bytes) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", desti);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (read_bytes == -1) {
        dprintf(STDERR_FILENO, "Error reading from file %s\n", origin);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    err_close = close(fd_from);
    if (err_close == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    err_close = close(fd_to);
    if (err_close == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
}

int main(int argc, char *argv[]) {
    const char *fileFrom;
    const char *fileTo;
  
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }
fileFrom = argv[1];
  fileTo = argv[2]

    copyFile(fileFrom, fileTo);

    return 0;
}
