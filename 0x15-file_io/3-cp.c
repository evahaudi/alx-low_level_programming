#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error - Prints an error message to stderr and exits with a non-zero status.
 * @msg: The error message to print.
 */
void error(char *msg)
{
    fprintf(stderr, "%s", msg);
    exit(1);
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int input_fd, output_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error("Usage: cp file1 file2\n");

    input_fd = open(argv[1], O_RDONLY);
    if (input_fd == -1)
        error("Error: Can't read from file1\n");

    output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (output_fd == -1)
        error("Error: Can't write to file2\n");

    while ((bytes_read = read(input_fd, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(output_fd, buffer, bytes_read);
        if (bytes_written != bytes_read)
            error("Error: Can't write to file2\n");
    }

    if (bytes_read == -1)
        error("Error: Can't read from file1\n");

    if (close(input_fd) == -1)
        error("Error: Can't close file1\n");

    if (close(output_fd) == -1)
        error("Error: Can't close file2\n");

    return 0;
}
