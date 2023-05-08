#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and writes to STDOUT
 * @filename: name of file to read
 * @letters: number of letters to read and write
 *
 * Return: number of bytes written to STDOUT, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	size_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	buf = malloc(letters);
	if (!buf)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buf, 1, letters, fp);
	bytes_written = fwrite(buf, 1, bytes_read, stdout);

	free(buf);
	fclose(fp);

	return (bytes_written);
}
