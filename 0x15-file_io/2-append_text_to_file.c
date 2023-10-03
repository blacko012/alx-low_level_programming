#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the filename.
 * @text_content: added content to the end of the file.
 *
 * Return: 1 if the file exists and the operation is successful,
 * or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, letr;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		letr = strlen(text_content);

		if (letr > 0)
		{
			wr = write(op, text_content, letr);

			if (wr == -1)
			{
			close(op);
			return (1);
			}
		}
	}

	close(op);

	return (1);
}
