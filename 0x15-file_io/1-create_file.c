#include "main.h"

/**
 * create_file - this create a file
 * @filename: A pointer to string which will write the file
 * @text_content: point to a string to write a file
 * Return: if the function fails --1 otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int cd, k, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	cd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	k = write(cd, text_content, len);

	if (cd == -1 || k == -1)
		return (-1);
	close(cd);
	return (1);
}
