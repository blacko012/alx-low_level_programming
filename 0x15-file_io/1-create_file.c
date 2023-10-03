#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: A pointer to the filename.
 * @text_content: Contents written in the file.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, letr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		letr = strlen(text_content);
	}

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	if (letr > 0)
	{
	wr = write(op, text_content, letr);

	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	}

	close(op);
	return (1);
}
