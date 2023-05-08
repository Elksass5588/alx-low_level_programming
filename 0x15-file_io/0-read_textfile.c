#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file & print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: w => actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t filed;
	ssize_t wr;
	ssize_t tr;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tr = read(filed, buf, letters);
	wr = write(STDOUT_FILENO, buf, tr);

	free(buf);
	close(filed);
	return (wr);
}

