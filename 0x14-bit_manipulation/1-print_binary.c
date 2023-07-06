#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int significantBits = 0;

	if (n == 0)
	{
		printf("0"); /* Special case for 0 */
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			printf("1");
			significantBits = 1;
		}
		else if (significantBits)
		{
			printf("0");
		}

		mask >>= 1;
	}
}
