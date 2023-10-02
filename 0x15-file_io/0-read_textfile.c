#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters.
 * @filename: A pointer to the filename.
 * @letters: numbers of letters that be read & printed.
 *
 * Return: numbers of letters printed. If fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
        return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
 		return (0);

	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(op);

	free(buf);

	return (wr);
}
