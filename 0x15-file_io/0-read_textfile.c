#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: actual number of bytes read and printed, or 0 if the function fails
 *         or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    size_t n;
    ssize_t w;
    FILE *file;

    if (!filename)
        return (0);

    file = fopen(filename, "r");
    if (!file)
        return (0);

    buf = malloc(letters);
    if (!buf)
    {
        fclose(file);
        return (0);
    }

    n = fread(buf, sizeof(char), letters, file);
    w = fwrite(buf, sizeof(char), n, stdout);

    free(buf);
    fclose(file);

    return (w);
}
