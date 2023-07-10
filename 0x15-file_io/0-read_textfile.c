#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: file being read
 * @letters: number of letters to be read
 * Return: y- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *d;
ssize_t gf;
ssize_t y;
ssize_t h;

if = open(filename, O_RDONLY);
if (gf == -1)
return (0);
d = malloc(sizeof(char) * letters);
h = read(gf, d, letters);
y = write(STDOUT_FILENO, d, h);
free(d);
close(gf);
return (y);
}

