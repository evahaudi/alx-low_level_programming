#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: Number to print in binary
 * Description:This function takes a decimal number and prints its binary
 * representation.It uses the _putchar function to output each.
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int significantBits = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			significantBits = 1;
		}
		else if (significantBits)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}

