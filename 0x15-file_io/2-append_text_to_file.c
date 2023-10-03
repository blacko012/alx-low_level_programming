#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the filename.
 * @text_content: added content to the end of the file.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, letr;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (!text_content)
	{
	for (letr = 0; text_content[letr];)
		letr++;

	wr = write(op, text_content, letr);

	if (wr == -1)
	}

	close(op);

	return (1);
}
