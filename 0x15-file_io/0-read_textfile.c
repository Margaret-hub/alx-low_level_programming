#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#define MAX_LENe 1024
#include <unistd.h>

/**
 * read_textfile- Read text file print
 * @filename:the file to be  read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t nd;
	ssize_t s;
	ssize_t v;

	nd = open(filename, O_RDONLY);
	if (nd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(nd, buf, letters);
	v = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(nd);
	return (v);
}
