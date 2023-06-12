#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that Allocates 1024 bytes for a buffer.
 * @file: a name of the file that buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - function that Closes the file descriptors
 * @fd: a file descriptor to be closed
 */
void close_file(int fd)
{
int b;

b = close(fd);

if (b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - function that Copies the contents of a file to another file.
 * @argc: A number of arguments that supplied to the program.
 * @argv: the array of pointers to the arguments
 * Return: 0
 * Description: If the argument count is incorrect it will exit code 97.
 * If file_from does not exist or cannot be read it will exit code 98.
 * If file_to cannot be created or written to it will exit code 99.
 * If file_to or file_from cannot be closed it will exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);

free(buffer);
close_file(from);
close_file(to);

return (0);
}
