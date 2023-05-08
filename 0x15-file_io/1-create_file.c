#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: A pointer to the name of the file to be create.
 * @text_content: A pointer to the string to write to the file
 * Return: If the function fails => -1 .
 *         Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdp, wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fdp, text_content, len);

	if (fdp == -1 || wr == -1)
		return (-1);

	close(fdp);

	return (1);
}

