#include "main.h"

/**
 * create_file - creates a file.
 * @filename: a pointer to the name of the file to create.
 * @text_content: a pointer to a string to write to the file.
 *
 * Return: if the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ab, j, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ab = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(ab, text_content, length);

	if (ab == -1 || j == -1)
		return (-1);

	close(ab);

	return (1);
}
