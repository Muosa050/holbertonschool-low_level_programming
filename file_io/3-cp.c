#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * error_exit - Print error message and exit with a code
 * @code: exit code
 * @msg: error message format
 * @file: filename to print in the message
 * @fd: file descriptor to close (or -1 to ignore)
 *
 * This function prints an error message to STDERR using dprintf,
 * closes the file descriptor if needed, then exits with the given code.
 */
void error_exit(int code, char *msg, char *file, int fd)
{
dprintf(STDERR_FILENO, msg, file);
if (fd >= 0)
close(fd);
exit(code);
}

/**
 * main - Copies content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Usage: cp file_from file_to
 * Return: 0 on success
 *
 * This program:
 * - Checks argument count (97 if wrong)
 * - Opens file_from for reading (98 on error)
 * - Opens/creates/truncates file_to for writing (99 on error)
 * - Reads 1024 bytes at a time and writes them
 * - Handles read/write/close errors properly
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, r, w;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);

while ((r = read(fd_from, buffer, 1024)) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);
}
if (r == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1], fd_from);

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
