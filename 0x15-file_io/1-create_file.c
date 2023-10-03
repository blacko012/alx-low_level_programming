#include "main.h"
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: A pointer to the filename.
 * @text_content: contents writed in the file.
 *
 * Return: 1 if it success & -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, letr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (letr = 0; text_content[letr];)
			letr++;
	}

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	wr = write(op, text_content, letr);

	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
