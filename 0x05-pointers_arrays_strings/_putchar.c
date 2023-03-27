#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: On success 1, on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
