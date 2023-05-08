#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define MEMORY_SIZE 1024

/**
 * error - prints an error message to stderr and exits with a non-zero status.
 * @m: the error message to print.
 */
void error(char *m)
{
    fprintf(stderr, "%s", m);
    exit(1);
}

/**
 * main - copies the contents of one file to another file.
 * @argc: the number of arguments.
 * @argv: the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int file1, file2;
    ssize_t byts_read, byts_written;
    char buffer[MEMORY_SIZE];

    if (argc != 3)
        error("Usage: cp file1 file2\n");

    file1 = open(argv[1], O_RDONLY);
    if (file1 == -1)
        error("Error: Can't read from file1\n");

    file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (file2 == -1)
        error("Error: Can't write to file2\n");

    while ((byts_read = read(file1, buffer, MEMORY_SIZE)) > 0)
    {
        byts_written = write(file2, buffer, byts_read);
        if (byts_written != byts_read)
            error("Error: Can't write to file2\n");
    }

    if (byts_read == -1)
        error("Error: Can't read from file1\n");

    if (close(file1) == -1)
        error("Error: Can't close file1\n");

    if (close(file2) == -1)
        error("Error: Can't close file2\n");

    return 0;
}
