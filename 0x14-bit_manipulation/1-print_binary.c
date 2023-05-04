#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k = 63, count = 0;
	unsigned long int curr_br;

	while (k >= 0)
	{
		curr_br = n >> k;

		if (curr_br & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}

		k--;
	}

	if (!count)
	{
		_putchar('0');
	}
}
